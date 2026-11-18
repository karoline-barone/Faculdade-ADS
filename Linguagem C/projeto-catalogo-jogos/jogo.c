//
// Created by karol on 16/11/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo.h"

// Inicializa o vetor de ponteiros com NULL em todas as posições
void inicializar() {
    for (int i = 0; i < MAX; i++) {
        v[i] = NULL;
    }
}

// Carga de Dados na Inicialização (Lê do arquivo texto se existir)
void carregar_dados() {
    FILE *f = fopen("jogos.txt", "r");
    if (f == NULL) {
        return; // Arquivo não existe ainda, inicia vazio sem erro
    }

    int i = 0;
    while (i < MAX) {
        int codigo;
        if (fscanf(f, "%d\n", &codigo) != 1) {
            break;
        }

        v[i] = (p_jogo) malloc(sizeof(jogo));
        if (v[i] == NULL) break;

        v[i]->codigo = codigo;

        fgets(v[i]->titulo, sizeof(v[i]->titulo), f);
        v[i]->titulo[strcspn(v[i]->titulo, "\n")] = '\0';

        fgets(v[i]->desenvolvedora, sizeof(v[i]->desenvolvedora), f);
        v[i]->desenvolvedora[strcspn(v[i]->desenvolvedora, "\n")] = '\0';

        fscanf(f, "%lf\n", &(v[i]->preco));
        fscanf(f, "%d\n", &(v[i]->horas_jogadas));
        i++;
    }
    fclose(f);
}

// Gravação de Dados (Salva o estado atual no arquivo texto)
void salvar_dados() {
    FILE *f = fopen("jogos.txt", "w");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo para gravacao!\n");
        return;
    }

    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL) {
            fprintf(f, "%d\n", v[i]->codigo);
            fprintf(f, "%s\n", v[i]->titulo);
            fprintf(f, "%s\n", v[i]->desenvolvedora);
            fprintf(f, "%.2lf\n", v[i]->preco);
            fprintf(f, "%d\n", v[i]->horas_jogadas);
        }
    }
    fclose(f);
}

// Retorna a quantidade atual de jogos alocados
int obter_total_cadastrados() {
    int contador = 0;
    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL) {
            contador++;
        }
    }
    return contador;
}

// Retorna o índice no vetor onde o código foi encontrado, ou -1 caso não exista
int buscar_posicao_por_codigo(int codigo) {
    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL) {
            if (v[i]->codigo == codigo) {
                return i;
            }
        }
    }
    return -1;
}

// Aloca memória (malloc) e realiza a leitura dos dados de um novo jogo
void adicionar_jogo() {
    int pos = -1;
    for (int i = 0; i < MAX; i++) {
        if (v[i] == NULL) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Nao ha espaco para mais jogos no catalogo.\n");
        return;
    }

    v[pos] = (p_jogo) malloc(sizeof(jogo));
    if (v[pos] == NULL) {
        printf("Erro ao alocar memoria!\n");
        return;
    }

    printf("Digite o codigo do jogo: ");
    scanf("%d", &(v[pos]->codigo));

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Digite o titulo do jogo: ");
    fgets(v[pos]->titulo, sizeof(v[pos]->titulo), stdin);
    v[pos]->titulo[strcspn(v[pos]->titulo, "\n")] = '\0';

    printf("Digite a desenvolvedora do jogo: ");
    fgets(v[pos]->desenvolvedora, sizeof(v[pos]->desenvolvedora), stdin);
    v[pos]->desenvolvedora[strcspn(v[pos]->desenvolvedora, "\n")] = '\0';

    printf("Digite o preco do jogo: ");
    scanf("%lf", &(v[pos]->preco));

    printf("Digite as horas jogadas: ");
    scanf("%d", &(v[pos]->horas_jogadas));

    printf("Jogo cadastrado com sucesso!\n");
}

// Solicita um código ao usuário, busca e imprime os dados se encontrado
void buscar_jogo_por_codigo() {
    int codigo;
    printf("Digite o codigo do jogo: ");
    scanf("%d", &codigo);

    int pos = buscar_posicao_por_codigo(codigo);

    if (pos == -1) {
        printf("Jogo nao encontrado\n");
        return;
    }
    imprimir_jogo(pos);
}

// Exibe os dados formatados do jogo presente na posição informada
void imprimir_jogo(int pos) {
    printf("Codigo: %d\n", v[pos]->codigo);
    printf("Titulo: %s\n", v[pos]->titulo);
    printf("Desenvolvedora: %s\n", v[pos]->desenvolvedora);
    printf("Preco: R$ %.2lf\n", v[pos]->preco);
    printf("Horas Jogadas: %d h\n", v[pos]->horas_jogadas);
}

// Localiza um jogo por código e permite atualizar seus dados
void alterar_jogo_por_codigo() {
    int codigo;
    printf("Digite o codigo do jogo a ser alterado: ");
    scanf("%d", &codigo);

    int pos = buscar_posicao_por_codigo(codigo);

    if (pos == -1) {
        printf("Jogo nao encontrado\n");
        return;
    }

    while (getchar() != '\n');

    printf("Digite o titulo atualizado: ");
    fgets(v[pos]->titulo, sizeof(v[pos]->titulo), stdin);
    v[pos]->titulo[strcspn(v[pos]->titulo, "\n")] = '\0';

    printf("Digite a desenvolvedora atualizada: ");
    fgets(v[pos]->desenvolvedora, sizeof(v[pos]->desenvolvedora), stdin);
    v[pos]->desenvolvedora[strcspn(v[pos]->desenvolvedora, "\n")] = '\0';

    printf("Digite o preco atualizado: ");
    scanf("%lf", &(v[pos]->preco));

    printf("As horas jogadas atualizadas: ");
    scanf("%d", &(v[pos]->horas_jogadas));

    printf("Jogo atualizado com sucesso!\n");
}

// Percorre o acervo e exibe todos os jogos atualmente cadastrados
void imprimir_todos() {
    int count = 0;
    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL) {
            imprimir_jogo(i);
            printf("------------------------\n");
            count++;
        }
    }
    if (count == 0) {
        printf("Nenhum jogo cadastrado no catalogo.\n");
    }
}

// Relatório / Estatística exigido para a Opção 1 (Média de preço e Jogo com mais horas jogadas)
void exibir_relatorio() {
    int total = obter_total_cadastrados();
    if (total == 0) {
        printf("Nenhum jogo cadastrado para gerar relatorio.\n");
        return;
    }

    double soma_precos = 0;
    int pos_mais_jogado = -0;
    int max_horas = -1;

    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL) {
            soma_precos += v[i]->preco;
            if (v[i]->horas_jogadas > max_horas) {
                max_horas = v[i]->horas_jogadas;
                pos_mais_jogado = i;
            }
        }
    }

    double media_preco = soma_precos / total;

    printf("\n=== RELATORIO E ESTATISTICAS DO CATALOGO ===\n");
    printf("Total de jogos cadastrados: %d\n", total);
    printf("Media de preco dos jogos: R$ %.2lf\n", media_preco);
    printf("--------------------------------------------\n");
    printf("Jogo com maior tempo jogado:\n");
    imprimir_jogo(pos_mais_jogado);
    printf("============================================\n");
}

// Libera com free() toda a memória alocada dinamicamente e aterra os ponteiros
void liberar_memoria() {
    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL) {
            free(v[i]);
            v[i] = NULL;
        }
    }
}
