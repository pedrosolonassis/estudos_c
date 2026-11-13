/* f) Construa um algoritmo que receba a altura e o peso de uma pessoa e calcule o Índice de
Massa Corporal (IMC). */

/*

algoritmo "multiplo5"
var
    IMC, peso, altura: real
inicio
    escreva("Informe sua altura: ")
    leia(altura)
    escreva("Informe seu peso: ")
    leia(peso)
    IMC <- peso / (altura * altura)
    escreva("Seu IMC é :, IMC")
fimalgoritmo

*/

#include <stdio.h>

int main(){

    float IMC, altura, peso;

    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    printf("Informe seu peso:\n");
    scanf("%f", &peso);
    IMC = peso / (altura * altura);
    printf("Seu IMC e igual a: %.2f\n", IMC);
}