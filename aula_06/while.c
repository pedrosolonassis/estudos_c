// Crie um programa em C que leia números digitados pelo usuário e exiba cada número na tela.
// O programa deve continuar pedindo novos números enquanto o valor digitado for diferente de 0.
// Quando o usuário digitar 0, o programa deve encerrar exibindo a mensagem "Programa encerrado".

#include <stdio.h>

int main(){
    int num = 1;

    while (num!=0) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
        
        if (num != 0){
            printf("Continue o programa\n");
        }
		else {
        }
    }
    printf("Programa Encerrado!\n");

    return 0;
}

// Faça para três notas

#include <stdio.h>

int main(){
    int contador = 1, nota;
    char nome[20];

    while(contador <= 3) {
        printf("\nDigite sua nota: ");
        scanf("%d", &nota);
        printf("Digite o seu nome: ");
        scanf("%s", &nome);
        printf("%s, teve a nota %d", nome, nota);
        contador++;
    }

    return 0;

}

// Crie um programa em C que simule o processo de login de um sistema.

#include <stdio.h>
#include <string.h>

int main(){
    char senha[20];
    char usuario[20];

    do {
        print("Digite o usuário: ");
        scanf("%s", usuario);

        printf("Digite a senha: ");
        scanf("%s", senha);

        if(srcmp(usuario, "admin") != 0 || strcmp(senha, "1234") !=0) {
            printf("Usuário ou senha incorretos. Tente novamente. \n\n");
        }
    } while(strcmp(usuario, "admin" != 0));
}

// imprimir de 1 até 20

#include <stdio.h>

int main(){
    int i;
    for(int i = 0; i < 20; i++) { 
        printf("%d", i+1);
    }
    
    return 0;

}

// Sistema deve ler o número de curtidas de 5 publicações de um influenciador e calcular a média de curtidas.
// Utilizar a estruutra de repetição for para ler as 5 quantidades
// Somar todos os valores.
// Exibir a média final no final da execução.

#include <stdio.h>

int main(){
    int i, curtidas;
    float media=0;
    for(i=0, i<5, i++){
        printf("Digite as curtidas: ");
        scanf("%d", curtidas);
        soma += curtidas;
    }
    media=soma/5.0;
    printf("%f", media/5.0);
    return 0;
}
