// Crie uma função chamada ehPar que receba um número inteiro e retorne 1 caso ele seja par
// ou 0 caso seja ímpar. No programa principal, leia um número e informe se ele é par ou ímpar
// utilizando o resultado da função.

#include <stdio.h>

int ehPar(int numero){
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    if (ehPar(numero)) {
        printf("%d e par.\n", numero);
    } else {
        printf("%d e impar.\n", numero);
    }

    return 0;
}