/* e) Desenvolva um algoritmo que receba um número inteiro e informe se ele é múltiplo de 5. */

/*

algoritmo "multiplo5"
var
    NUM: inteiro
inicio
    escreva("Informe um numero: ")
    leia(NUM)
    se NUM % 5 == 0 entao
        escreva("O numero e multiplo de 5.")
    senao
        escreva("O numero nao e multiplo de 5.")
    fimse
fimalgoritmo

*/

#include <stdio.h>

int main(){

    int NUM;

    printf("Informe um numero:\n");
    scanf("%d", &NUM);
    if(NUM % 2 == 0){
        printf("O numero e multiplo de 5.");
    }
    else{
        printf("O numero nao e multiplo de 5.");
    }
}