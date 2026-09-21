#include <stdio.h>
//Formatando e Lendo Strings: Escreva um programa que leia do usuário seu nome, idade e altura. Use a função sprintf() para formatar essas informações em uma
//única string no formato:"Nome:[nome], Idade:[idade], Altura:[altura]". Em seguida, usando sscanf(), extraia essas informações da string formatada e as imprima separadamente.

int main(void) {
    char nome[21];
    int idade;
    float altura;
    //lendo dados do usuario
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    //formatar informacoes em uma unica string
    char informacoes[101];
    sprintf(informacoes, "Nome:%s , Idade:%d, Altura:%f", nome, idade, altura);
    //extraindo informacoes da string formatada
    char nome_extraido[21];
    int idade_extraida;
    float altura_extraida;
    sscanf(informacoes, "Nome:%s , Idade:%d, Altura:%f", nome_extraido, &idade_extraida, &altura_extraida);
    //imprimir dados
    printf("Nome: %s\n", nome_extraido);
    printf("Idade: %d\n", idade_extraida);
    printf("Altura: %.2f\n", altura_extraida);
    return 0;
}
