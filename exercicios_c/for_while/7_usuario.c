/*Escreva um programa que solicite ao usuário 10 números inteiros e determine:
o maior número digitado;
o menor número digitado;
a diferença entre o maior e o menor número.
Restrição: não é permitido utilizar vetores_matrizes ou matrizes*/

#include <stdio.h>

int main() {
    int i, num, maior, menor;

    // Lê o primeiro número separadamente para inicializar 'maior' e 'menor'
    printf("Digite o 1o numero inteiro: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    // Lê os 9 números restantes com um laço 'for'
    for (i = 2; i <= 10; i++) {
        printf("Digite o %do numero inteiro: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Diferenca (maior - menor): %d\n", maior - menor);

    return 0;
}