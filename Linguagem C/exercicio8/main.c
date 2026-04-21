#include <stdio.h>

int main(void) {
    // leia um numero inteiro positivo
    // verifique se ele eh primo. Imprima "primo" ou "nao primo"
    int num, resultado;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            resultado++;
        }
    }
    if (resultado > 1) {
        printf("Nao primo");
    } else {
        printf("Primo");
    }

    return 0;
}