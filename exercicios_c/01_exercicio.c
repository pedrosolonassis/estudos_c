/* a)Elabore um algoritmo que receba dois números, calcule a multiplicação entre eles e apresente o resultado. */

/*

algoritmo "multiplicacao"
var
    N1, N2: inteiro
    M: real
inicio
    escreva("Informe um numero: ")
    leia(N1)
    escreva("Informe outro numero: ")
    leia(N2)
    M <- (N1 * N2)
    escreva("A multiplicação entre ", N1, " e ", N2, " é igual a: " M)
fimalgoritmo

*/

#include <stdio.h>

int main(){

    int N1, N2, M;

    printf("Informe um numero:\n");
    scanf("%d", &N1);
    printf("Escolha outro numero:\n");
    scanf("%d", &N2);
    
    M = N1 * N2;

    printf("A multiplicacao entre %d e %d e: %d\n", N1, N2, M);
}