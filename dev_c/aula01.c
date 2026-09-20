#include <stdio.h>

int main(){
	printf("Oi, tudo bem? Tenho 6 anos e programo. \n");
	printf("Valor inteiro: %d \n", 10); /* o %d � substituido pelo 10 */
	printf("Valor real: %f \n", 3.14159265); 
	printf("Valor real com apenas duas casas: %2f \n", 3.14159265);
	printf("Dado de texto: %c \n", 'a'); /* dado texto de um unico caractere */
	printf("Dado de texto: %s \n", "testando");
	
	int idade = 0;
	int ano = 1950;
	
	printf("Digite uma idade e ano:\n");
	scanf("%d %d", &idade, &ano);
	printf("Idade informada: %d \n", idade);
	printf("Ano informado: %d \n", ano);

	float peso = 0.0;
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	printf("Digite um peso:\n");
	scanf("%f", &peso);
	printf("Idade informada: %d \n", idade);
	printf("Peso informado: %.2f \n", peso);
}
