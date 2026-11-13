/* 1. Sistema de classificação de triângulos
Leia três valores inteiros representando os lados de um triângulo.O programa deve:
Verificar se os valores podem formar um triângulo;
Caso possam, determinar se ele é equilátero, isósceles ou escaleno;
Determinar se é acutângulo, retângulo ou obtusângulo;
Informar caso os valores não formem um triângulo. */

/*

algoritmo "triangulo"
var
    A, B, C
inicio

*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres lados: ");
    scanf("%d %d %d", &a, &b, &c);

    // 1. Verificar se forma triangulo
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Nao forma um triangulo.\n");
    }
    else {

        // 2. Classificar pelos lados
        if (a == b && b == c) {
            printf("Equilatero\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Isosceles\n");
        }
        else {
            printf("Escaleno\n");
        }

        // 3. Classificar pelos angulos
        if (a >= b && a >= c) {
            if (b*b + c*c == a*a)
                printf("Retangulo\n");
            else if (b*b + c*c > a*a)
                printf("Acutangulo\n");
            else
                printf("Obtusangulo\n");
        }
        else if (b >= a && b >= c) {
            if (a*a + c*c == b*b)
                printf("Retangulo\n");
            else if (a*a + c*c > b*b)
                printf("Acutangulo\n");
            else
                printf("Obtusangulo\n");
        }
        else {
            if (a*a + b*b == c*c)
                printf("Retangulo\n");
            else if (a*a + b*b > c*c)
                printf("Acutangulo\n");
            else
                printf("Obtusangulo\n");
        }
    }

    return 0;
}