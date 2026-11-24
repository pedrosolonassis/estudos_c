/*Escreva um algoritmo em C que leia 10 números inteiros. Para cada número, informe se ele é par ou ímpar.
Ao final, apresente a quantidade de números pares e a quantidade de números ímpares.*/

#include <stdio.h>

int main() {
    int i, num;
    int pares = 0, impares = 0;

    // Sabemos que são exatamente 10 números, então usamos o 'for'
    for (i = 1; i <= 10; i++) {
        printf("Digite o %do numero inteiro: ", i);
        scanf("%d", &num);

        // Verifica se o resto da divisão por 2 é zero
        if (num % 2 == 0) {
            printf("Numero par.\n\n");
            pares++;
        } else {
            printf("Numero impar.\n\n");
            impares++;
        }
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}