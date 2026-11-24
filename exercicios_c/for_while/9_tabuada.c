/*Escreva um programa que solicite um número inteiro e apresente sua tabuada de 1 a 10.
Após apresentar a tabuada, pergunte ao usuário se deseja calcular a tabuada de outro número. 
O programa deve continuar enquanto a resposta for "S" ou "s"*/

#include <stdio.h>

int main() {
    int num, i;
    char resp = 's';

    while (resp == 's' || resp == 'S') {
        printf("Digite um numero: ");
        scanf("%d", &num);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Calcular outro numero? (s/n): ");
        scanf(" %c", &resp); // o espaço ignora o '\n' deixado pelo Enter anterior
    }

    return 0;
}