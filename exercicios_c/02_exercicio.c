/* b) Desenvolva um algoritmo que receba cinco números, calcule a média aritmética e apresente
o resultado final. */

/*

algoritmo "media"
var
    N1, N2, N3, N4, N5: inteiro
    M: real
inicio
    escreva("Informe o primeiro numero: ")
    leia(N1)
    escreva("Informe o segundo numero: ")
    leia(N2)
    escreva("Informe o terceiro numero: ")
    leia(N3)
    escreva("Informe o quarto numero: ")
    leia(N4)
    escreva("Informe o quinto numero: ")
    leia(N5)
    M <- (N1 + N2 + N3 + N4 + N5) / 5
    escreva("A média entre ", N1, ", ", N2, ", ", N3, ", ", N4, " e " N5, " é igual a: " M)
fimalgoritmo

*/

#include <stdio.h>

int main(){

    int N1, N2, N3, N4, N5;
    float M;

    printf("Informe o primeiro numero:\n");
    scanf("%d", &N1);
    printf("Informe o segundo numero:\n");
    scanf("%d", &N2);
    printf("Informe o terceiro numero:\n");
    scanf("%d", &N3);
    printf("Informe o quarto numero:\n");
    scanf("%d", &N4);
    printf("Informe o quinto numero:\n");
    scanf("%d", &N5);
    
    M = (N1 + N2 + N3 + N4 + N5) / 5;

    printf("A media entre %d , %d , %d , %d e %d e: %.2f\n", N1, N2, N3, N4, N5, M);
}