/* h) Construa um algoritmo que receba a quantidade de horas trabalhadas por um funcionário e o
valor da hora trabalhada, calculando o salário total. */

/*

algoritmo "trabalho"
var
    VH, HT, S: Inteiro
inicio
    escreva("Quantidade de horas trabalhadas: ")
    leia(HT)
    escreva("Valor por hora trabalhada: ")
    leia(VH)
    S <- HT * VH
    escreva("O salario total foi: " S)
fimalgoritmo

*/

#include <stdio.h>

int main(){

    int HT, VH, S;

    printf("Quantidade de horas trabalhadas:\n");
    scanf("%d", &HT);
    printf("Valor por hora trabalhada:\n");
    scanf("%d", &VH);
    
    S = HT * VH;
    
    printf("O valor do salario e: %d\n", S);
}