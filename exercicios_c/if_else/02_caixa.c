/* 
2. Um caixa possui notas de:
R$ 200, R$ 100, R$ 50, R$ 20, R$ 10 e R$ 5O usuário informa o valor do saque.
O programa deve verificar:
Se o valor é válido;
Se é possível realizar o saque;
Quais notas devem ser entregues;
A quantidade de cada nota;
A quantidade total de cédulas.
Porém, existe uma regra adicional:
O caixa deve preservar pelo menos uma nota de cada denominação disponível.
O programa deve decidir se consegue realizar o saque sem violar essa regra.
*/

#include <stdio.h>

int main() {
    int valorSaque, resto;
    int n200 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0;
    int totalCedulas = 0;

    // 1. Leitura do valor do saque
    printf("Digite o valor do saque: ");
    if (scanf("%d", &valorSaque) != 1) {
        printf("Erro.\n");
        return 1;
    }

    // 2. Validação se o valor é válido (positivo e múltiplo de 5)
    if (valorSaque <= 0 || valorSaque % 5 != 0) {
        printf("Erro: O valor deve ser maior que zero e multiplo de 5.\n");
    } else {
        // 3. Regra adicional: Verificar se o valor atinge o patamar mínimo 
        if (valorSaque < 385) {
            printf("Erro: É necessario sacar ao menos R$ 385 para preservar uma nota de cada.\n");
        } else {
            resto = valorSaque;

            n200 = resto / 200;
            resto %= 200;

            n100 = resto / 100;
            resto %= 100;

            n50 = resto / 50;
            resto %= 50;

            n20 = resto / 20;
            resto %= 20;

            n10 = resto / 10;
            resto %= 10;

            n5 = resto / 5;
            resto %= 5;

            // 4. Verificação se a regra adicional foi atendida 
            if (n200 >= 1 && n100 >= 1 && n50 >= 1 && n20 >= 1 && n10 >= 1 && n5 >= 1) {
                printf("\nSaque realizado\n");
                printf("Cédulas entregues:\n");
                printf("Notas de R$ 200: %d\n", n200);
                printf("Notas de R$ 100: %d\n", n100);
                printf("Notas de R$ 50: %d\n", n50);
                printf("Notas de R$ 20: %d\n", n20);
                printf("Notas de R$ 10: %d\n", n10);
                printf("Notas de R$ 5: %d\n", n5);

                totalCedulas = n200 + n100 + n50 + n20 + n10 + n5;
                printf("Quantidade total de cedulas: %d\n", totalCedulas);
            } else {
                printf("Erro.\n");
            }
        }
    }

    return 0;
}