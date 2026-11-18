//
// Created by karol on 16/11/2026.
//

#ifndef JOGO_H
#define JOGO_H

#define MAX 100

// Definição da entidade Jogo
typedef struct Jogo {
    int codigo;
    char titulo[51];
    char desenvolvedora[51];
    double preco;
    int horas_jogadas;
} jogo;

// Definição do tipo ponteiro para Jogo
typedef jogo* p_jogo;

extern p_jogo v[MAX];

// Inicializa o vetor de ponteiros com NULL em todas as posições
void inicializar();

// Carrega os dados do arquivo texto para o vetor na inicialização
void carregar_dados();

// Salva todos os registros válidos do vetor para o arquivo texto
void salvar_dados();

// Retorna a quantidade atual de jogos alocados no acervo
int obter_total_cadastrados();

// Retorna o índice no vetor onde o código foi encontrado, ou -1 caso não exista
int buscar_posicao_por_codigo(int codigo);

// Aloca memória (malloc) e realiza a leitura dos dados de um novo jogo
void adicionar_jogo();

// Solicita um código ao usuário, busca e imprime os dados se encontrado
void buscar_jogo_por_codigo();

// Localiza um jogo por código e permite atualizar seus dados
void alterar_jogo_por_codigo();

// Exibe os dados formatados do jogo presente na posição informada
void imprimir_jogo(int pos);

// Percorre o acervo e exibe todos os jogos atualmente cadastrados
void imprimir_todos();

// Exibe o relatório estatístico (média de preço e jogo com mais horas jogadas)
void exibir_relatorio();

// Libera com free() toda a memória alocada dinamicamente e aterra os ponteiros
void liberar_memoria();

#endif // JOGO_H