/* 4. Faça um programa que apresente o seguinte menu:
===== MENU =====
1 -Verificar número par ou ímpar
2 -Verificar se é positivo ou negativo
3 -Calcular o quadrado do número
4 –Sair
O usuário deverá escolher uma opção e, quando necessário, informar um número. Utilize switch para controlar o menu.
O programa deve tratar também opções inválidas.
Restrições: na opção 1, além de informar se o número é par ou ímpar, informe também se ele é positivo, negativo ou zero.
*/

#include <stdio.h>

int main() {
    int opcao;
    int numero;

    // Apresentação do menu
    printf("MENU\n");
    printf("1 - Verificar numero par ou impar\n");
    printf("2 - Verificar se e positivo ou negativo\n");
    printf("3 - Calcular o quadrado do numero\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Controle do menu usando switch
    switch (opcao) {
        case 1:
            printf("Digite um numero: ");
            scanf("%d", &numero);
            
            // Verificando se é par ou ímpar
            if (numero % 2 == 0) {
                printf("O numero %d e par.\n", numero);
            } else {
                printf("O numero %d e impar.\n", numero);
            }
            
            // Restrição: informar também se é positivo, negativo ou zero
            if (numero > 0) {
                printf("Ele tambem e positivo.\n");
            } else if (numero < 0) {
                printf("Ele tambem e negativo.\n");
            } else {
                printf("Ele e igual a zero.\n");
            }
            break;

        case 2:
            printf("Digite um numero: ");
            scanf("%d", &numero);
            
            // Verificando se é positivo, negativo ou zero
            if (numero > 0) {
                printf("O numero %d e positivo.\n", numero);
            } else if (numero < 0) {
                printf("O numero %d e negativo.\n", numero);
            } else {
                printf("O numero e zero.\n");
            }
            break;

        case 3:
            printf("Digite um numero: ");
            scanf("%d", &numero);
            
            // Calculando o quadrado (número vezes ele mesmo)
            printf("O quadrado de %d e: %d\n", numero, numero * numero);
            break;

        case 4:
            printf("Fim\n");
            break;

        default:
            // Tratamento de opção inválida exigido pela questão
            printf("Opcao invalida! Escolha uma opcao entre 1 e 4.\n");
            break;
    }

    return 0;
}