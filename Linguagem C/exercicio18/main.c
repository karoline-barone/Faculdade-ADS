#include <stdio.h>

int main(void) {
    // Cenário: O aventureiro dá 10 passos em um corredor escuro. Alguns passos ativam placas de pressão (armadilhas).
    // Tarefa: Crie um laço que se repete 10 vezes. Dentro dele, leia um número inteiro representando o "peso" do passo. Se o peso for par, a armadilha falha; use o comando continue para pular a linha que imprime "Dano Sofrido!". Se o peso for ímpar, imprima "Dano Sofrido!".
    int peso;
    for (int i = 1; i <= 10; i++) {
        printf("Digite o peso do passo: \n");
        scanf("%d", &peso);
        if (peso % 2 == 0) {
            continue;
        }
        printf("Dano Sofrido! \n");
    }
    return 0;
}