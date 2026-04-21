#include <stdio.h>

int main(void) {
    // leia um numero inteiro positivo e calcule o seu fatorial
    // utilize a estrutura do-while para realizar as multiplicacoes
    int num;
    int resultado = 1;
    printf("Digite um numero: ");
    scanf("%d",&num);
    do {
        resultado = resultado * num;
        num --;
    } while(num > 0);
    printf("O resultado eh: %d \n", resultado);

    return 0;
}