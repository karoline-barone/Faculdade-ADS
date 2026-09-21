#include <stdio.h>
#include <string.h>
//Cópia com Limite de Caracteres: Crie um programa que leia duas strings. A primeira é uma frase e a segunda é um número n.
//Use a função strncpy() para copiar os primeiros n caracteres da frase para uma terceira string e imprima o resultado.
int main(void) {
    char frase[100] = {'\0'};
    char resultado[100] = {'\0'};
    int n = 0;
    //ler a frase
    printf("Digite uma frase de ate 100 caracteres: ");
    fflush(stdin);
    gets(frase);
    //ler o numero n
    printf("Digite quantos caracteres gostaria de copiar: ");
    scanf("%d", &n);
    //copiar os primeiros n caracteres
    strncpy(resultado, frase, n);
    //imprimir o resultado
    printf("Resultado da copia: %s", resultado);
    return 0;
}
