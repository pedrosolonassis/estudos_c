// Crie uma função chamada celsiusParaFahrenheitque receba uma temperatura em graus Celsius
// e retorne o valor convertido para Fahrenheit. Utilize a fórmula F = (9 ×C) / 5 + 32.
// O programa principal deverá solicitar a temperatura ao usuário e apresentar o resultado com duas casas decimais.

#include <stdio.h>

float celsiusParaFahrenheit(float celsius){
    return (9 * celsius) / 5 + 32;
}

int main(){
    float celsius;
    float fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusParaFahrenheit(celsius);

    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    return 0;
}