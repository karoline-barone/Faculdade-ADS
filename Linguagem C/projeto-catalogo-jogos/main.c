#include <stdio.h>
#include "jogo.h"

p_jogo v[MAX];

int montar_menu();

int main(void) {
    inicializar();
    carregar_dados(); 

    int opcao = 0;

    do {
        opcao = montar_menu();
        switch (opcao) {
            case 1:
                adicionar_jogo();
                break;
            case 2:
                buscar_jogo_por_codigo();
                break;
            case 3:
                alterar_jogo_por_codigo();
                break;
            case 4:
                imprimir_todos();
                break;
            case 5:
                exibir_relatorio();
                break;
            case 6:
                salvar_dados();
                printf("Dados salvos com sucesso. Fim do programa.\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while (opcao != 6);

    liberar_memoria();
    return 0;
}

int montar_menu() {
    int opc;
    printf("\n=== Catalogo de Jogos Digitais ===\n");
    printf("1. Cadastrar jogo\n");
    printf("2. Buscar jogo por codigo\n");
    printf("3. Alterar jogo por codigo\n");
    printf("4. Listar todos os jogos\n");
    printf("5. Exibir relatorio estatistico\n");
    printf("6. Salvar e Sair do sistema\n");
    printf("Escolha sua opcao: ");
    scanf("%d", &opc);
    return opc;
}
