#include <stdio.h>

int main(void) {
    // Cenário: Em um RPG, o dano do guerreiro depende da sua força e de um dado de sorte (1 a 20). Se o dado der 20, é um "Dano Crítico" que dobra o dano base. A armadura do inimigo reduz o dano final.
    // Tarefa: Leia a Força (int), o valor do Dado (int) e a Armadura do Inimigo (int). O dano base é Força * 2. Se o dado for 20, multiplique o dano base por 2. O dano final é o Dano Base - Armadura. Se o dano final for menor que 0, imprima 0. Senão, imprima o dano causado.
    int forca, valordado, arminimigo, danobase, danofinal;
    printf("Insira a forca: \n", forca);
    scanf("%d", &forca);
    printf("Insira o valor do dado (entre 1 e 20): \n");
    scanf("%d", &valordado);
    printf("Insira a armadura do inimigo: \n");
    scanf("%d", &arminimigo);
    danobase = forca*2;
    if (valordado == 20) {
        danobase = danobase * 2;
    }
    danofinal = danobase - arminimigo;
    if (danofinal < 0) {
        printf("O dano causado foi 0");
    } else {
        printf("O dano causado foi %d", danofinal);
    }

    return 0;
}