/*Um jovem quer juntar dinheiro e acompanhar o saldo do seu cofrinho. Faça um programa que simule um cofrinho digital. 
O usuário pode adicionar moedas de R$0,50, R$1,00 ou R$2,00 quantas vezes quiser. Quando decidir parar, o programa deve mostrar o total acumulado*/

#include <stdio.h>

int main() {
    float saldo = 0.0;
    int opcao = 1;

    while (opcao != 0) {
        printf("\nSaldo atual: R$ %.2f\n", saldo);
        printf("1 - Adicionar R$ 0,50\n");
        printf("2 - Adicionar R$ 1,00\n");
        printf("3 - Adicionar R$ 2,00\n");
        printf("0 - Parar e ver total\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                saldo += 0.50;
                break;
            case 2:
                saldo += 1.00;
                break;
            case 3:
                saldo += 2.00;
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }

    printf("\nTotal acumulado no cofrinho: R$ %.2f\n", saldo);

    return 0;
}