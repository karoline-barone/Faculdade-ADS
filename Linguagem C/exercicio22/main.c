#include <stdio.h>
//Maior e Menor Valor: Desenvolva um programa que leia um vetor de 8 posições e, em seguida, encontre o maior valor e a sua posição no vetor. Faça o mesmo para o menor valor.
int main(void) {
    int valores[8];
    int maior = 0; int menor = 0;
    int posmaior = 0; int posmenor = 0;
    //leitura do vetor valores[]
    for (int i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &valores[i]);
        //encontrando maior e menor valores e verificando sua posição
        if (i == 0) {
            maior = valores[0];
            menor = valores[0];
        } else {
            if (valores[i] > maior) {
                maior = valores[i];
                posmaior = i;
            } else if (valores[i] < menor) {
                menor = valores[i];
                posmenor = i;
            }
        }
    }
    //saída de dados
    printf("O maior numero eh: %d e sua posicao no vetor eh: %d \n", maior, posmaior);
    printf("O menor numero eh: %d e sua posicao no vetor eh: %d", menor, posmenor);
    return 0;
}
