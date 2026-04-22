#include <stdio.h>

int main(void) {
    // Cenário: Um alquimista mistura ingredientes baseados na cor das folhas: 'V' (Verde), 'A' (Azul), 'R' (Vermelha).
    // Tarefa: Leia um caractere. Usando switch, imprima: 'V': "Pocao de Cura", 'A': "Pocao de Mana", 'R': "Pocao de Forca", Qualquer outro: "Mistura Explosiva!"
    char caractere;
    printf("Digite um caractere v, a ou r: ");
    scanf("%c", &caractere);
    fflush(stdin);
    switch (caractere) {
        case 'v': printf("Pocao de cura \n"); break;
        case 'a': printf("Pocao de mana \n"); break;
        case 'r': printf("Pocao de forca \n"); break;
        default: printf("Mistura explosiva \n");
    }

    return 0;
}