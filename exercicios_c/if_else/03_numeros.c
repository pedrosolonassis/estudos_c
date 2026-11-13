/* 
3. Leia três números inteiros A, B e C.
Sem ordenar os valores e sem utilizar funções auxiliares, o programa deve informar:
Maior valor;
Menor valor;
Valor intermediário;
Se existem valores repetidos;
Se os três valores são iguais;
Se estão em ordem crescente;
Se estão em ordem decrescente.
Restrição: resolver utilizando apenas comparações condicionais.
*/

#include <stdio.h>

int main() {
    int a, b, c;

    // 1. Leitura dos três números inteiros
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("\n--- RESULTADOS ---\n");

    // 2. Determinar o Maior valor
    if (a >= b && a >= c) {
        printf("Maior valor: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Maior valor: %d\n", b);
    } else {
        printf("Maior valor: %d\n", c);
    }

    // 3. Determinar o Menor valor
    if (a <= b && a <= c) {
        printf("Menor valor: %d\n", a);
    } else if (b <= a && b <= c) {
        printf("Menor valor: %d\n", b);
    } else {
        printf("Menor valor: %d\n", c);
    }

    // 4. Determinar o Valor intermediário
    if ((a > b && a < c) || (a < b && a > c)) {
        printf("Valor intermediario: %d\n", a);
    } else if ((b > a && b < c) || (b < a && b > c)) {
        printf("Valor intermediario: %d\n", b);
    } else {
        printf("Valor intermediario: %d\n", c);
    }

    // 5 e 6. Verificar igualdade e valores repetidos
    if (a == b && b == c) {
        printf("Os tres valores sao iguais.\n");
        printf("Existem valores repetidos.\n");
    } else if (a == b || a == c || b == c) {
        printf("Os tres valores NAO sao iguais.\n");
        printf("Existem valores repetidos.\n");
    } else {
        printf("Os tres valores NAO sao iguais.\n");
        printf("Nao existem valores repetidos.\n");
    }

    // 7. Verificar se estão em ordem crescente
    if (a < b && b < c) {
        printf("Estao em ordem estritamente crescente.\n");
    } else if (a <= b && b <= c) {
        printf("Estao em ordem crescente (com valores iguais).\n");
    } else {
        printf("Nao estao em ordem crescente.\n");
    }

    // 8. Verificar se estão em ordem decrescente
    if (a > b && b > c) {
        printf("Estao em ordem estritamente decrescente.\n");
    } else if (a >= b && b >= c) {
        printf("Estao em ordem decrescente (com valores iguais).\n");
    } else {
        printf("Nao estao em ordem decrescente.\n");
    }

    return 0;
}