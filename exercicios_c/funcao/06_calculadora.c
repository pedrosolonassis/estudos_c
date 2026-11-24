// feito na IA, revisar depois

#include <stdio.h>

#define TOTAL_PRODUCTS 8

int calcularTotalEstoque(int stock[], int size)
{
    int total = 0;
    int i;

    for (i = 0; i < size; i++) {
        total += stock[i];
    }

    return total;
}

int contarEstoqueBaixo(int stock[], int size)
{
    int count = 0;
    int i;

    for (i = 0; i < size; i++) {
        if (stock[i] < 5) {
            count++;
        }
    }

    return count;
}

int buscarProduto(int stock[], int code)
{
    int index;

    for (index = 0; index < TOTAL_PRODUCTS; index++) {
        if (index + 1 == code) {
            return index;
        }
    }

    return -1;
}

int main(void)
{
    int stock[TOTAL_PRODUCTS];
    int code;
    int position;
    int i;

    for (i = 0; i < TOTAL_PRODUCTS; i++) {
        printf("Quantidade em estoque do produto %d: ", i + 1);
        scanf("%d", &stock[i]);
    }

    printf("\nTotal de itens em estoque: %d\n", calcularTotalEstoque(stock, TOTAL_PRODUCTS));
    printf("Produtos com estoque baixo (menos de 5): %d\n", contarEstoqueBaixo(stock, TOTAL_PRODUCTS));

    do {
        printf("\nDigite o codigo do produto para buscar (0 para sair): ");
        scanf("%d", &code);

        if (code != 0) {
            position = buscarProduto(stock, code);

            if (position != -1) {
                printf("Produto %d encontrado na posicao %d do vetor. Quantidade: %d\n", code, position, stock[position]);
            } else {
                printf("Produto %d nao existe.\n", code);
            }
        }
    } while (code != 0);

    return 0;
}