#include <stdio.h>

int main(void) {
    // Cenário: Um mago precisa invocar um feitiço cujo poder cresce seguindo a sequência de Fibonacci (0, 1, 1, 2, 3, 5, 8...).
    // Tarefa: Leia um número N. Use um laço de repetição para imprimir os N primeiros números da sequência de Fibonacci. Lembre-se: não use vetores, apenas variáveis para guardar os valores anteriores!
    int n;
    int a = 0, b = 1, c;
    printf("Digite um numero n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d \n", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}