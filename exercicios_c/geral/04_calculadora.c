// Construa uma calculadora

#include <stdio.h>
#include <stdlib.h>



int main() {

    double num1;
    double num2;
    char op;

    printf("Entre com um número: ");
    scanf("%f", &num1);
    printf("Entre com o operador: ");
    scanf(" %c", &op);
    printf("Entre com o outro número");
    scanf("f", &num2);

    if (op == '+') {
        printf("%f", num1 + num2);
    } else if (op == '-') {
        printf("%f", num1 - num2);
    } else if (op == '/') {
        printf("%f", num1 / num2);
    } else if (op == '*') {
        printf("%f", num1 * num2);
    } else {
        printf("Operador Inválido");
    }

    return 0;
}