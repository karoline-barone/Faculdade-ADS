#include <stdio.h>
// Soma dos Elementos: Escreva um programa que leia um vetor de 10 números inteiros e calcule e imprima a soma de todos os seus elementos.
int main(void) {
    int numeros[10];
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    printf("A soma dos numeros: %d\n", soma);
    return 0;
}
