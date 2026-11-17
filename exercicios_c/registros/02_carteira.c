// Construa em algoritmo que simula uma carteira digital. A carteira possui os seguintes campos:
// nome; numero; saldo; tipo (01- corrente / 02 - poupança / 03 - salário). A carteira possui 'n' clientes.
// O menu é composto por: Abrir carteira; consular carteira; sair.
// Saída Consulta: Saldo total = R$<valor>> / Número de clientes = <Qtde>

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct {
    char nome[20];
    int numero = 1000;
    float saldo;
    int tipo;
}Cliente;

void abrirCarteira() {
    int n_clientes;
    while (n_clientes <= 0){
    printf("Quantos clientes vão ser cadastrados?\n");
    scanf("%d", &n_clientes);
    }
    Cliente *ptr_n_clientes =(Cliente *) malloc(n_clientes * sizeof(Cliente));
    if (ptr_n_clientes == NULL) {
        printf("Problema na memoria.");
        return 1;
    }

    int i;
    for (i=0; i < n_clientes; i++){
        printf("Qual o nome do cliente?");
        scanf("%s", ptr_n_clientes[i].nome);
    }

}

void consultarCarteira() {
    float saldo_total;
    int n_clientes;


}

int main() {
    int choice;
    printf("=== Bem-Vindo (a) ao nosso banco, digite uma opção abaixo para realizar sua operação ===\n");
    printf("1 - Abrir Carteira \n 2 - Consultar Carteira \n 3 - Sair");

    while (choice != 1 || choice != 2 || choice != 3){
     printf("Insira um número válido");
    }
    do {
        switch (tipo){
            case 1:
                printf("Você escolheu abrir a carteira.");
                abrirCarteira();
                break;
            case 2:
                printf("Você escolheu consultar a carteira.");
                consultarCarteira();
                break;
            case 3:
                printf("Você escolheu sair do sistema.");
                break;
            default:
                printf("Código Inválido.");
                break;
        } while (choice =! 3);
    }
return 0;
}