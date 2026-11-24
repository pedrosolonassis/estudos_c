// Desenvolva uma função chamada maiorNumeroque receba dois números inteiros e retorne o maior deles.
// Caso os números sejam iguais, a função deverá retornar qualquer um dos valores.

#include <stdio.h>

int maiorNumero(int primeiro, int segundo){
    if (primeiro > segundo) {
        return primeiro;
    } else {
        return segundo;
    }
}

int main(){
    int primeiro;
    int segundo;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundo);

    printf("O maior numero e %d\n", maiorNumero(primeiro, segundo));

    return 0;
}