/*Faça um programa que leia números inteiros continuamente. A entrada deve terminar quando o usuário digitar 0. Ao final, apresente:
a soma de todos os números positivos;
a soma de todos os números negativos;
a quantidade de números positivos;
a quantidade de números negativos.
O zero não deve ser considerado positivo nem negativo*/

#include <stdio.h>

int main() {
    int num;
    int soma_positivos = 0, soma_negativos = 0;
    int qtd_positivos = 0, qtd_negativos = 0;

    printf("Digite numeros inteiros (0 para encerrar):\n");
    scanf("%d", &num);

    // Repete enquanto o valor informado não for a condição de parada (0)
    while (num != 0) {
        if (num > 0) {
            soma_positivos += num;
            qtd_positivos++;
        } else {
            // Como num != 0 e não é > 0, só pode ser negativo
            soma_negativos += num;
            qtd_negativos++;
        }

        scanf("%d", &num);
    }

    printf("\n--- Resultados ---\n");
    printf("Soma dos positivos: %d\n", soma_positivos);
    printf("Quantidade de positivos: %d\n", qtd_positivos);
    printf("Soma dos negativos: %d\n", soma_negativos);
    printf("Quantidade de negativos: %d\n", qtd_negativos);

    return 0;
}