/* d) Elabore um algoritmo que receba dois números e apresente o resultado da subtração entre
eles. */

/*

algoritmo "subtracao"
var
    N1, N2, S: inteiro
inicio
    escreva("Informe um numero: ")
    leia(N1)
    escreva("Informe outro numero: ")
    leia(N2)
    S <- N1 - N2
    escreva("A subtracao entre ", N1, " e ", N2, " é igual a: " S)
fimalgoritmo

*/

#include <stdio.h>

int main(){

    int N1, N2, S;

    printf("Informe um numero:\n");
    scanf("%d", &N1);
    printf("Escolha outro numero:\n");
    scanf("%d", &N2);
    
    S = N1 - N2;

    printf("A subtracao entre %d e %d e: %d\n", N1, N2, S);
}