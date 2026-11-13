/* c) Construa um algoritmo que receba o valor de um produto e calcule o preço final
considerando um acréscimo de 8% de imposto. */

/*

algoritmo "produto"
var
    VP, VF: real
inicio
    escreva("Informe o valor do produto: ")
    leia(VP)
    VF <- VP * 1.08
    escreva("O valor final do produto é igual a: " VF)
fimalgoritmo

*/

#include <stdio.h>

int main(){

    float VP, VF;

    printf("Informe o valor do produto:\n");
    scanf("%f", &VP);
    
    VF = VP * 1.08;

    printf("O valor final do produto e: %f\n", VF);
}