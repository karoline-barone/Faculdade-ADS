#include <stdio.h>

int main(void) {
    // crie um laco infinito que pede repetidamente para o usuario digitar um numero
    // some todos os numeros digitados
    // se o usuario digitar um numero negativo, use o comando break e imprima a soma total sem incluir o numero negativo
    int num;
    int soma = 0;
    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("A soma dos numeros eh: %d", soma);
            break;
        } else {soma += num;}
    }

    return 0;
}