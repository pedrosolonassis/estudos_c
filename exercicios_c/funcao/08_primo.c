// Crie uma função chamada ehPrimo que receba um número inteiro e retorne 1 caso ele seja primo
// ou 0 caso contrário. O programa principal deverá solicitar um número e informar o resultado.
// Considere que números menores que 2 não são primos.
// Como desafio adicional, implemente a verificação testando os divisores somente até a raiz quadrada do número,
// sem utilizar a função sqrt().

#include <stdio.h>

int ehPrimo(int numero)
{
    int divisor;

    if (numero < 2) {
        return 0;
    }

    for (divisor = 2; divisor * divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            return 0;
        }
    }

    return 1;
}

int main(){
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d e primo.\n", numero);
    } else {
        printf("%d nao e primo.\n", numero);
    }

    return 0;
}