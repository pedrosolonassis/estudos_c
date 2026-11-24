// Crie uma função chamada calcularDobro que receba um número inteiro como parâmetro e retorne o seu dobro.
// No programa principal, leia um número, chame a função e exiba o resultado.

#include <stdio.h>

int calcularDobro(int numero){
    return numero * 2;
}

int main(){
    int numero;
    int resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = calcularDobro(numero);

    printf("O dobro de %d e %d\n", numero, resultado);

    return 0;
}