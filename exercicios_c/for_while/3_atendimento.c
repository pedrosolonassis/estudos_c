/*Uma loja quer saber a nota média do atendimento dos clientes. Enunciado:
Um sistema deve ler a nota de atendimento (de 0 a 10) de 10 clientes e calcular a média geral. Se a média for menor que 7, deve exibir uma
mensagem de alerta.*/

#include <stdio.h>

int main() {
    int i;
    float nota, soma = 0.0, media;

    // Como sabemos que são exatamente 10 clientes, usamos o 'for'
    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        // Garante que a nota fique dentro do intervalo permitido (0 a 10)
        while (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite novamente (0 a 10): ");
            scanf("%f", &nota);
        }

        soma += nota;
    }

    media = soma / 10.0;
    printf("\nMedia geral do atendimento: %.2f\n", media);

    if (media < 7.0) {
        printf("ALERTA: A media de atendimento esta abaixo de 7.0!\n");
    }

    return 0;
}