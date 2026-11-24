// Análise de notas de uma turma: Uma turma possui 10 alunos, e o professor deseja analisar suas notas finais.
// Desenvolva um programa que armazene as notas em um vetor e implemente as seguintes funções:
// calcularMediaTurma, que retorne a média das notas; encontrarMaiorNota, que retorne a maior nota registrada;
// contarAprovados, que retorne a quantidade de alunos com nota maior ou igual a 7,0;
// e exibirResultados, que apresente os resultados calculados.
// As funções responsáveis pelos cálculos devem retornar os valores, sem imprimir diretamente os resultados.

#include <stdio.h>

#define TOTAL_ESTUDANTES 10

float calcularMediaTurma(float nota[], int size)
{
    float soma = 0;
    int i;

    for (i = 0; i < size; i++) {
        soma += nota[i];
    }

    return soma / size;
}

float encontrarMaiorNota(float nota[], int size)
{
    float maior_nota = nota[0];
    int i;

    for (i = 1; i < size; i++) {
        if (nota[i] > maior_nota) {
            maior_nota = nota[i];
        }
    }

    return maior_nota;
}

int contarAprovados(float nota[], int size)
{
    int count = 0;
    int i;

    for (i = 0; i < size; i++) {
        if (nota[i] >= 7.0) {
            count++;
        }
    }

    return count;
}

void exibirResultados(float media, float maior_nota, int alunosAprovados)
{
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior_nota);
    printf("Alunos aprovados: %d\n", alunosAprovados);
}

int main()
{
    float nota[TOTAL_ESTUDANTES];
    float media;
    float maior_nota;
    int alunosAprovados;
    int i;

    for (i = 0; i < TOTAL_ESTUDANTES; i++) {
        printf("Nota final do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);
    }

    media = calcularMediaTurma(media, TOTAL_ESTUDANTES);
    maior_nota = encontrarMaiorNota(nota, TOTAL_ESTUDANTES);
    alunosAprovados = contarAprovados(nota,TOTAL_ESTUDANTES);

    exibirResultados(media, maior_nota, alunosAprovados);

    return 0;
}