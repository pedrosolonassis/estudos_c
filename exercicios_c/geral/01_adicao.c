// Construa um programa que leia dois valores numéricos inteiros e efetua a adição;
// caso o resultado seja maior que 10, apresentá-lo.

#include <stdio.h>

int main() {

    //variaveis
    int num1, num2, soma;

    //entradas
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    //processamento
    soma = num1 + num2;

    if (soma>10) {
        printf("O valor da soma %d + %d = %d", num1, num2, soma);
    }
    else {
        printf("Soma insuficiente.");
    }

    //saídas

    return 0;
}