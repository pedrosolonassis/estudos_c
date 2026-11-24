/*Faça um programa que leia as notas de vários alunos. A leitura deve continuar enquanto o usuário desejar. 
Para cada aluno, leia 3 notas, calcule a média e informe:
Aprovado, se a média for maior ou igual a 7;
Recuperação, se a média estiver entre 5 e 6,9;
Reprovado, se a média for menor que 5.
Ao final, informe quantos alunos foram aprovados, quantos ficaram de recuperação e
quantos foram reprovados.*/

#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    char resp = 's';

    // Repete enquanto o usuário desejar cadastrar mais alunos
    while (resp == 's' || resp == 'S') {
        printf("\nDigite as 3 notas do aluno: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        // Divide por 3.0 para garantir cálculo real com casas decimais
        media = (n1 + n2 + n3) / 3.0;
        printf("Media: %.2f - ", media);

        if (media >= 7.0) {
            printf("Aprovado\n");
            aprovados++;
        } else if (media >= 5.0) {
            printf("Recuperacao\n");
            recuperacao++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }

        printf("Deseja cadastrar outro aluno? (s/n): ");
        scanf(" %c", &resp);
    }

    printf("\n--- Resumo Final ---\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}