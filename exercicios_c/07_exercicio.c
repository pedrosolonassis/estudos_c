/* g) Elabore um algoritmo que receba a temperatura em graus Celsius e apresente o valor
convertido para graus Fahrenheit. */

/*

algoritmo "temperatura"
var
    celsius, fahrenheit: real
inicio
    escreva("Informe a temperatura em Celsius: ")
    leia(celsius)
    fahrenheit <- (celsius * 9 / 5) + 32
    escreva("A temperatura em Fahrenheit e: ", fahrenheit)
fimalgoritmo

*/

#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);
}