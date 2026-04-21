#include <stdio.h>

int main(void) {
    // use um laco for para contar de 1 a 30
    // se o numero for multiplo de 3, use o comando continue para pular a impressao
    // imprima os demais numeros
    for (int i = 1; i <=30; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}