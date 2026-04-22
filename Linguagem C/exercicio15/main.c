#include <stdio.h>

int main(void) {
    // Cenário: O herói foi emboscado! Ele tem uma quantidade X de Vida. Os goblins atacam um por vez.
    // Tarefa: Leia a Vida do herói. Depois, em um laço infinito, leia o dano do ataque do goblin atual. Subtraia o dano da Vida do herói. Se a Vida do herói chegar a 0 ou menos, imprima "Heroi Derrotado!" e use break para parar o laço. Se o dano lido for 0, significa que não há mais goblins; imprima "Heroi Sobreviveu!" e pare o laço.
    int vidaheroi, danogoblin;
    printf("Digite a vida do heroi: ");
    scanf("%d", &vidaheroi);
    while (1) {
        printf("Digite o dano do ataque do goblin: ");
        scanf("%d", &danogoblin);
        vidaheroi -= danogoblin;
        if (vidaheroi <= 0) {
            printf("Heroi derrotado");
            break;
        }
        if (danogoblin == 0) {
            printf("Heroi sobreviveu");
            break;
        }
    }

    return 0;
}