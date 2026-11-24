/* Um condomínio quer monitorar o consumo de água de cada morador.
 * Escreva um programa que leia o consumo mensal de água (em m³) de 5 moradores.
Para cada morador, informe se o consumo está dentro da média (até 20 m³) ou acima.
Ao final, mostre o consumo médio geral. */

#include <stdio.h>

int main() {
    int i;
    float consumo;
    float soma_consumo = 0.0;
    float media_geral;

    // A quantidade de moradores (5) é conhecida, então usamos o laço 'for'
    for (i = 1; i <= 5; i++) {
        printf("Digite o consumo mensal de agua do morador %d (em m3): ", i);
        scanf("%f", &consumo);

        // Acumula o consumo para calcular a média geral ao final
        soma_consumo += consumo;

        // Verifica se está dentro da faixa de até 20 m³ ou acima
        if (consumo <= 20.0) {
            printf("Morador %d: consumo dentro da media (ate 20 m3).\n\n", i);
        } else {
            printf("Morador %d: consumo acima da media.\n\n", i);
        }
    }

    // Usa 5.0 para garantir divisão real (float) e evitar truncamento inteiro
    media_geral = soma_consumo / 5.0;

    printf("Consumo medio geral do condomino: %.2f m3\n", media_geral);

    return 0;
}