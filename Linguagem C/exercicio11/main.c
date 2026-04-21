#include <stdio.h>

int main(void) {
    // Cenário: Em uma vila medieval, o taverneiro precisa dar o troco exato usando o menor número de moedas possíveis.
    // As moedas disponíveis são de 100, 50, 10, 5 e 1 peça de cobre.
    // Tarefa: Leia um valor inteiro representando o troco a ser dado. Calcule e imprima a quantidade de cada moeda necessária para formar esse valor
    int troco;
    printf("Digite o troco: ");
    scanf("%d", &troco);
    printf("O troco em moedas de 100 eh: %d \n", troco/100);
    troco = troco % 100;
    printf("O troco em moedas de 50 eh: %d \n", troco/50);
    troco = troco % 50;
    printf("O troco em moedas de 10 eh: %d \n", troco/10);
    troco = troco % 10;
    printf("O troco em moedas de 5 eh: %d \n", troco/5);
    troco = troco % 5;
    printf("O troco em moedas de 1 eh: %d \n", troco);

    return 0;
}