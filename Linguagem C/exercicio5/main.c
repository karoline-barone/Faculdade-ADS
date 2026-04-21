#include <stdio.h>

int main(void) {
    // leia um numero inteiro N
    // usando um laco while, calcule e mostre a soma de todos os numeros pares entre 1 e N
    int num;
    int i = 1;
    int somapar = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    while (i < num) {
        if (i % 2 == 0) {
            somapar += i;
        }
        i++;
    }
    printf("A soma dos pares eh: %d", somapar);

    return 0;
}