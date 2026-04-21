#include <stdio.h>

int main(void) {
    // peca ao usuario um numero inteiro de 1 a 10
    // use um laco for para imprimir a tabuada desse numero
    int num;
    printf("Digite um numero inteiro de 1 a 10: \n");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d \n", num, i, num * i);
    }

    return 0;
}