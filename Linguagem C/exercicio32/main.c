#include <stdio.h>
#include <string.h>
//Comparação de Strings: Desenvolva um programa que leia duas strings e use a função strcmp() para compará-las. Se as strings
//forem iguais, imprima "As strings são iguais", caso contrário, imprima "As strings são diferentes".

int main(void) {
    char string1[21] = {'\0'};
    char string2[21] = {'\0'};
    //leitura das strings
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);
    //comparando
    if (strcmp(string1, string2) == 0) {
        printf("As strings sao iguais.");
    } else {
        printf("As strings sao diferentes");
    }
    return 0;
}
