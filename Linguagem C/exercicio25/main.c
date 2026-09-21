//Vetor de números negativos: Escreva um programa que leia um vetor de 12 posições.
//Substitua todas as posições que contém um valor negativo por zero. Ao final, imprima o vetor modificado.
#include <stdio.h>

int main(void) {
    int numeros[12];
    //leitura do vetor
    for (int i = 0; i < 12; i++) {
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &numeros[i]);
        //verificando o número é negativo para receber 0
        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }
    //mostrando o vetor modificado
    printf("Vetor substituindo por 0 os numeros negativos: ");
    for (int i = 0; i < 12; i++) {
        printf("[%d]", numeros[i]);
    }
    return 0;
}
