#include <stdio.h>

int main(void) {
    // leia um numero inteiro do usuario
    // usando o operador if-else, imprima se o numero eh par ou impar
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("O numero %d eh par", num);
    } else {
        printf("O numero %d eh impar", num);
    }

    return 0;
}