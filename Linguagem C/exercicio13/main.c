#include <stdio.h>

int main(void) {
    // Cenário: Uma sonda em Marte perde uma porcentagem fixa de bateria a cada dia de operação.
    // Tarefa: Leia a carga inicial da bateria (em %) e a taxa de perda diária (um valor real). Use um laço para descobrir quantos dias a sonda consegue funcionar antes de a bateria ficar menor ou igual a 5%. Imprima a quantidade de dias.
    double cargainicial, perdadiaria, cargafinal;
    int dias = 0;
    printf("Digite o valor da carga inicial: ");
    scanf("%lf", &cargainicial);
    printf("Digite o valor da perda diaria: ");
    scanf("%lf", &perdadiaria);
    cargafinal = cargainicial;
    while(cargafinal > 5) {
        cargafinal -= perdadiaria;
        dias++;
    }
    printf("A sonda consegue funcionar %d dias", dias);

    return 0;
}