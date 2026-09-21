#include <stdio.h>
//Diagonal Principal: Desenvolva um programa que leia uma matriz 4x4 e imprima a sua diagonal principal.

int main(void) {
    int matriz[4][4];
    //leitura da matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor da posicao matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //imprimindo a matriz
    printf("Mostrando a matriz: ");
    for (int i = 0; i < 4; i++) {
        printf("\n");
        for (int j = 0; j < 4; j++) {
            printf("[%d]", matriz[i][j]);
        }
    }
    //imprimindo diagonal principal
    printf("\nSua diagonal principal eh: ");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                printf("[%d]", matriz[i][j]);
            }
        }
    }
    return 0;
}
