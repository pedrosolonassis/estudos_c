/*Escreva um programa que leia um número inteiro positivo e determine se ele é primo.
O programa deve verificar todos os possíveis divisores do número e informar o resultado.
Depois, modifique o programa para permitir que o usuário teste vários números, encerrando a execução quando ele escolher não continuar.*/

#include <stdio.h>

int main() {
    int num, i, divisores;
    char resp = 's';

    while (resp == 's' || resp == 'S') {
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &num);

        // Garante que o número seja positivo
        while (num <= 0) {
            printf("Valor invalido! Digite um numero inteiro positivo: ");
            scanf("%d", &num);
        }

        divisores = 0;

        // Verifica todos os possíveis divisores de 1 até num
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisores++;
            }
        }

        // Um número primo possui exatamente 2 divisores (1 e ele mesmo)
        if (divisores == 2) {
            printf("%d e primo.\n", num);
        } else {
            printf("%d nao e primo.\n", num);
        }

        printf("Deseja testar outro numero? (s/n): ");
        scanf(" %c", &resp);
    }

    return 0;
}