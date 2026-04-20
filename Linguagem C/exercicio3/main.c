#include <stdio.h>

int main(void) {
    // crie uma calculadora que leia dois numeros reais e um caractere com a operacao + - * /
    // usando switch, realize a operacao correspondente e exiba o resultado
    double n1, n2, result;
    char op;
    printf("Digite os dois valores reais: \n");
    scanf("%lf %lf", &n1, &n2);
    fflush(stdin);
    printf("Digite o simbolo da operacao: + - * / \n");
    scanf("%c", &op);
    switch (op) {
        case '+':
            result = n1 + n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '/':
            if (n2 == 0) {
                printf("Erro de divisao por zero");
                return 1;
            }else {result = n1 / n2;}
             break;
        default:
            printf("Operacao nao existente");
            return 1;
    }
    printf("O resultado da operacao eh: %.2lf\n", result);

    return 0;
}