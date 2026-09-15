#include <stdio.h>

int main()
{
	printf("Meu primeiro programa em C\n");
	printf("Testando\n");
	puts("Meu primeiro programa em C");
	
    int i = 10;
	float r = 7.1234;
	
    printf("Inteiro: %d, Real: %f \n", i, r);
	printf("Inteiro: %d, Real: %f \n", r, i);

    // declaracao das variaceis
    int numero1;

    printf("Entre com um valor: ");
    scanf("%d", &numero1);
	printf("O numero digitado foi: ", &numero1);
	
	int numero2;
    float nota;
    
    printf("digite um valor\n");
    scanf("%d", &numero2);
    
    printf("digite a media\n");
    scanf("%f", &nota);
}