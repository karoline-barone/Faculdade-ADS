#include <stdio.h>

int main(void) {
    // Escreva um programa que leia a base e a altura de um retangulo. Calcule e imprima
    // a area e o perimetro
    int base, altura, area, perimetro;
    printf("Qual a base do retangulo? \n");
    scanf("%d", &base);
    printf("Qual altura do retangulo? \n");
    scanf("%d", &altura);
    area = base * altura;
    perimetro = 2*base + 2*altura;
    printf("A area do retangulo eh: %d \n", area);
    printf("O perimetro do retangulo eh: %d \n", perimetro);

    return 0;
}
