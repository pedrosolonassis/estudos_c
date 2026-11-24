/*Um aplicativo quer acompanhar a meta diária de passos de um usuário. Faça um programa que leia a quantidade de passos dados por um usuário
a cada hora. O programa deve parar quando o total atingir ou ultrapassar 10.000 passos e então informar quantas horas foram necessárias.*/

#include <stdio.h>

int main() {
    int passos_hora;
    int total_passos = 0;
    int horas = 0;

    // Como não sabemos quantas horas serão necessárias, usamos o 'while'
    while (total_passos < 10000) {
        horas++;
        printf("Digite os passos dados na hora %d: ", horas);
        scanf("%d", &passos_hora);

        total_passos += passos_hora;
    }

    printf("\nMeta atingida! Total: %d passos em %d hora(s).\n", total_passos, horas);

    return 0;
}