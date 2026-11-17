// Desenvolva um programa que pergunte um código e de acordo com o valor digitado seja apresentado o cargo correspondente.
// Caso o usuário digite um código que não esteja na tabela, mostrar uma mensagem de código inválido. Utilize a tabela abaixo:
// 101: Vendedor / 102: Atendente / 103: Auxiliar Técnico / 104: Assistente / 105: Coordenador de Grupo/ 106: Gerente.

#include <stdio.h>

int main() {

    // variaveis
    int codigo;

    // entradas
    printf("Digite um codigo da tabela: ");
    scanf("%d", &codigo);

    // processamento
    if (codigo == 101) {
        printf("Vendedor.");
    }else if (codigo == 102) {
        printf("Atendente.");
    }else if (codigo == 103) {
        printf("Auxiliar Tecnico.");
    }else if (codigo == 104) {
        printf("Assistente.");
    }else if (codigo == 105) {
        printf("Coordenador de Grupo.");
    }else if (codigo == 106) {
        printf("Gerente.");
    }else {
        printf("Codigo Invalido");
    }

    // saídas

    return 0;
}