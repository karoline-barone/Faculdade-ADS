#include <stdio.h>
//Contagem de Pares e Ímpares: Desenvolva um programa que leia um vetor com 20 números. Em seguida, determine e imprima quantos valores pares e ímpares ele possui.

int main(void) {
    int numeros[20]; int pares[20]; int impares[20];
    int pospar = 0; int posimpar = 0;
    for (int i = 0; i < 20; i++) {
        printf("Digite o numero %d: ", i+1); //leitura do vetor numeros[]
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) { //colocando números pares no vetor pares[]
            pares[pospar] = numeros[i];
            pospar++;
        } else {
            impares[posimpar] = numeros[i]; //colocando números ímpares no vetor impares[]
            posimpar++;
        }
    }
    //saída de dados
    printf("Quantidade de numeros pares: %d\n", pospar);
    for (int i = 0; i < pospar; i++) {
        printf("[%d]", pares[i]);
    }
    printf("\nQuantidade de numeros impares: %d\n", posimpar);
    for (int i = 0; i < posimpar; i++) {
        printf("[%d]", impares[i]);
    }
    return 0;
}
