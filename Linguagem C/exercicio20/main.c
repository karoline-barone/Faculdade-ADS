#include <stdio.h>

int main(void) {
    // Cenário: Um dragão tem N tesouros em sua caverna, mas ele só considera "raros" os tesouros com valor superior a 10.000 moedas de ouro.
    // Tarefa: Leia a quantidade de tesouros N. Em seguida, use um laço para ler o valor de cada um dos N tesouros. Conte quantos tesouros têm valor maior que 10.000. Ao final do laço, imprima: "O dragao possui X tesouros raros", onde X é a contagem final.
    int n, valor, raro = 0;
    printf("Digite a quantidade de tesouros do dragao: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Digite o valor do tesouro do dragao: ");
        scanf("%d", &valor);
        if (valor > 10000) {
            raro++;
        }
    }
    printf("O dragao possui %d tesouros raros", raro);

    return 0;
}