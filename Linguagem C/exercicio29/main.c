#include <stdio.h>
//Maior Valor de uma Matriz: Crie um programa que leia uma matriz 5x5. O programa deve encontrar e imprimir o maior valor da matriz e sua respectiva posição(linha e coluna).

int main(void) {
    int matriz[5][5];
    int maiorvalor, posi, posj;
    //leitura da matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor da posicao[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            //encontrando maior valor e posicao
            if (i==0 && j==0) {
                maiorvalor = matriz[i][j];
                posi = i;
                posj = j;
            } else {
                if (matriz[i][j] > maiorvalor) {
                    maiorvalor = matriz[i][j];
                    posi = i;
                    posj = j;
                }
            }
        }
    }
    //imprimindo maior valor e posicao
    printf("O maior valor eh: %d\n", maiorvalor);
    printf("Sua posicao eh:[%d][%d]\n", posi, posj);
    return 0;
}
