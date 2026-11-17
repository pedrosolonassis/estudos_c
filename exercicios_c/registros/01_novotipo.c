#include <stdio.h>
#include <string.h>

// Definindo o registro com typedef
typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    // Declarando uma variável do novo tipo 'Pessoa'
    Pessoa p1;

    strcpy(p1.nome,"Maria");
    p1.idade = 25;
    p1.altura = 1.68;

    printf("Nome: %s | Idade: %d | Altura: %.2f\n", p1.nome, p1.idade, p1.altura);

    return 0;
}