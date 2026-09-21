#include <stdio.h>
#include <string.h>
//Concatenação de Strings: Escreva um programa que leia duas strings do usuário e, usando a função strcat(), concatene
//a segunda string ao final da primeira. Imprima a string resultante.

int main(void) {
    char string1[21] = {'\0'};
    char string2[21] = {'\0'};
    char resultado[41] = {'\0'};
    //lendo as duas strings
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);
    //concatenar
    strcat(resultado, string1);
    strcat(resultado, " ");
    strcat(resultado, string2);
    //imprimir a string resultante
    puts(resultado);
    return 0;
}
