// Uma loja deseja analisar as vendas realizadas durante cinco dias.
// Crie um programa que leia os valores das vendas e implemente três funções:
// calcularTotal, que receba os valores e retorne a soma das vendas; calcularMedia, que receba o total
// e a quantidade de dias e retorne a média diária; e contarVendasAcimaDaMedia, que receba os valores das vendas
// e a média e retorne quantos dias tiveram vendas acima da média.
// Ao final, apresente o total vendido, a média diária e a quantidade de dias acima da média.

// feito na IA, revisar depois

#include <stdio.h>

#define TOTAL_DAYS 5

float calcularTotal(float sales[], int days)
{
    float total = 0;
    int i;

    for (i = 0; i < days; i++) {
        total += sales[i];
    }

    return total;
}

float calcularMedia(float total, int days)
{
    return total / days;
}

int contarVendasAcimaDaMedia(float sales[], int days, float average)
{
    int count = 0;
    int i;

    for (i = 0; i < days; i++) {
        if (sales[i] > average) {
            count++;
        }
    }

    return count;
}

int main(void)
{
    float sales[TOTAL_DAYS];
    float total;
    float average;
    int daysAboveAverage;
    int i;

    for (i = 0; i < TOTAL_DAYS; i++) {
        printf("Valor vendido no dia %d: R$ ", i + 1);
        scanf("%f", &sales[i]);
    }

    total = calcularTotal(sales, TOTAL_DAYS);
    average = calcularMedia(total, TOTAL_DAYS);
    daysAboveAverage = contarVendasAcimaDaMedia(sales, TOTAL_DAYS, average);

    printf("\nTotal vendido: R$ %.2f\n", total);
    printf("Media diaria: R$ %.2f\n", average);
    printf("Dias com vendas acima da media: %d\n", daysAboveAverage);

    return 0;
}