#include <stdio.h>
//Multiplicação de Matriz por um Escalar: Escreva um programa que leia uma matriz 2x2 e um número inteiro(escalar).
//O programa deve multiplicar cada elemento da matriz pelo escalar e imprimir a matriz resultante.
int main(void) {
    int matriz[2][2], resultante[2][2];
    int escalar;
    //leitura da matriz
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("Digite o valor da matriz na posicao[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //define escalar
    printf("Digite o valor do escalar: ");
    scanf("%d", &escalar);
    //montagem da matriz resultante
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            resultante[i][j] = matriz[i][j] * escalar;
        }
    }
    //imprimir matriz resultante
    printf("Matriz resultante: ");
    for (int i=0; i<2; i++) {
        printf("\n");
        for (int j=0; j<2; j++) {
            printf("[%d]", resultante[i][j]);
        }
    }
    return 0;
}
