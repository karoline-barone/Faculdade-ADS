#include <stdio.h>
#include <stdlib.h>
//Conversão de String para Número: Elabore um programa que leia uma string representando um número decimal e um número de ponto flutuante.
//Use as funções atoi() e atof() para converter as strings para seus respectivos tipos numéricos e, em seguida, imprima a soma dos dois números.

int main(void) {
    char stringint[] = "42";
    char stringfloat[] = "12.75";
    //conversao das strings
    int numint = atoi(stringint);
    float numfloat = atof(stringfloat);
    //calculo soma
    double soma = numint + numfloat;
    //exibir resultados
    printf("String inteira convertida: %d\n", numint);
    printf("String ponto flutuante convertida: %.2f\n", numfloat);
    printf("Soma dos dois valores: %.2f", soma);
    return 0;
}
