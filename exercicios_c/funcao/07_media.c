// Crie uma função chamada calcularMediaque receba três notas e retorne a média aritmética.
// Em seguida, crie uma função chamada verificarSituacaoque receba a média e exiba a situação do aluno,
// considerando aprovado quem obtiver média maior ou igual a 7,0 e reprovado quem obtiver média inferior a 7,0.
// No programa principal, leia as três notas, calcule a média e apresente a situação do aluno.


#include <stdio.h>

float calcularMedia(float media1, float media2, float media3)
{
    return (media1 + media2 + media3) / 3;
}

void verificarSituacao(float media)
{
    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}

int main(){
    float media1;
    float media2;
    float media3;
    float media;

    printf("Digite a 1a nota: ");
    scanf("%f", &media1);
    printf("Digite a 2a nota: ");
    scanf("%f", &media2);
    printf("Digite a 3a nota: ");
    scanf("%f", &media3);

    media = calcularMedia(media1, media2, media3);

    printf("Media: %.2f\n", media);
    verificarSituacao(media);

    return 0;
}