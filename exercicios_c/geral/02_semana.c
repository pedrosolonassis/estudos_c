// Criar um programa que leia o número inteiro entre 1 e 7 e escreva o dia da semana correspondente.
// Caso o usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando que
// não existe dia da semana com esse número.

#include <stdio.h>

int main() {

    // variáveis
    int num_dia=0;

    // entradas
    printf("Digie o numero do dia da semana: ");
    scanf("%d", &num_dia);

    // processamento

    if (num_dia == 1) {
        printf("Domingo");
    }else if (num_dia == 2) {
        printf("Segunda");
    }else if (num_dia == 3) {
        printf("Terça");
    }else if (num_dia == 4) {
        printf("Quarta");
    }else if (num_dia == 5) {
        printf("Quinta");
    }else if (num_dia == 6) {
        printf("Sexta");
    }else if (num_dia == 7) {
        printf("Sabado");
    }else {
        printf("Numero invalido.");
    }

    // saídas

    return 0;
}