#include <stdio.h>
//Transposta de uma Matriz: Crie um programa que leia uma matriz 3x3 e imprima a sua matriz transposta(a matriz transposta é obtida trocando linhas por colunas).

int main(void) {
    int matriz[3][3], transposta[3][3];
    //leitura da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //montando matriz transposta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }
    //imprimindo matriz transposta
    printf("Matriz transposta: ");
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("[%d]", transposta[i][j]);
        }
    }
    return 0;
}
