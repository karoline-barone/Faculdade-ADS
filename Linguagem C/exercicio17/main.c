#include <stdio.h>

int main(void) {
    // Cenário: O Rei cobra pedágio por roda do veículo. Carroças (4 rodas), Carruagens (6 rodas) e Motos antigas (2 rodas). O valor é 5 moedas por roda. Durante a noite, o pedágio tem desconto de 50%.
    // Tarefa: Leia o número de rodas e uma variável inteira hora (0 a 23). Calcule o custo inicial. Usando um operador ternário, verifique se é noite (hora >= 18 ou hora < 6) para aplicar o desconto ou não. Imprima o valor final.
    int rodas, hora;
    printf("Qual a quantidade de rodas? ");
    scanf("%d", &rodas);
    printf("Digite a hora inteira (0 a 23): ");
    scanf("%d", &hora);
    if (hora >= 18 || hora < 6) {
        printf("O valor eh: %f moedas \n", rodas*2.5);
    } else {
        printf("O valor eh: %d moedas \n", rodas*5);
    }
    return 0;
}