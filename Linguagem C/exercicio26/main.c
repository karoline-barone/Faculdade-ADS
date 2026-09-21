#include <stdio.h>
//Soma de Matrizes: Escreva um programa que leia duas matrizes 3x3 e calcule a soma dessas matrizes. O programa deve imprimir a matriz resultante.

int main(void) {
    int matriz1[3][3], matriz2[3][3], matrizsoma[3][3];
    //leitura da matriz1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Entre o valor para matriz1[%d][%d] = ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    //leitura da matriz2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Entre o valor para matriz2[%d][%d] = ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    //soma das matrizes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    //imprimir matriz resultante
    printf("Matriz resultante da soma das matrizes 1 e 2: ");
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("[%d] ", matrizsoma[i][j]);
        }
    }
    return 0;
}
