#include <stdio.h>

int main(){
	int A, B, soma, subtr, mult, divis;
	int dado = 10;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d \n", soma);
	printf("Subtracao: %d \n", subtr);
	printf("Multiplicacao: %d \n", mult);
	
	printf("Dado antes do incremento: %d \n", dado);
	
	dado++;
	printf("Depois do incremento: %d \n", dado);
	
	dado--;
	printf("Depois do decremento: %d \n", dado);
	
	dado += 3;
	printf("Depois do incremento em 3 unidades: %d \n", dado);
	
	dado -= 2;
	printf("Depois do decremento em 2 unidades: %d \n", dado);
	
	dado *= 10;
	printf("Depois de multiplicar por 10: %d \n", dado);
}


