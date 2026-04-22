#include <stdio.h>

int main(void) {
    // Cenário: Os anões medem a temperatura da fornalha em graus Celsius, mas o manual da máquina está em Fahrenheit.
    // Tarefa: Crie um laço que leia várias temperaturas em Celsius. Para cada uma, converta e imprima em Fahrenheit (). O programa deve parar assim que uma temperatura em Celsius lida for igual a 1000 (Temperatura de derretimento do Mithril), avisando "Fornalha no limite!".
    double temp;
    do {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &temp);
        if (temp != 1000) {
            printf("A temperatura em Fahrenheit eh: %.2lf \n", temp*1.8+32);
        }
    }while (temp != 1000);
    printf("Fornalha no limite!");

    return 0;
}