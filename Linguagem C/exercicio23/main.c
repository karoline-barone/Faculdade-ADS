#include <stdio.h>
//Inversão de Vetor: Crie um programa que leia um vetor de 15 números inteiros e o apresente invertido. Por exemplo, se o vetor de entrada for [1,2,3,...,15], a saída deve ser [15,14,13,...,1]
int main(void) {
    int numeros[15];
    int numerosinvertidos[15];
    //leitura do vetor numeros[]
    for (int i = 0; i < 15; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    //invertendo o vetor numeros[] e colocando no vetor numeros invertidos[]
    int pos = 14;
    for (int i = 0; i < 15; i++) {
        numerosinvertidos[pos] = numeros[i];
        pos--;
    }
    //mostrando o vetor invertido
    printf("Numeros invertidos:\n");
    for (int i = 0; i < 15; i++) {
        printf("[%d]", numerosinvertidos[i]);
    }
    return 0;
}
