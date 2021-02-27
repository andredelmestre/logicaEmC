#include <stdio.h>

int main (){
	int id, peso1, peso2;
	float preco1, preco2, X1, X2;
	//entradas
	printf("ID do produto: ");
	scanf("%i", &id);
	printf("\nEmbalagem 1 de quantos gramas? ");
	scanf("%i", &peso1);
	printf("\nPreco (R$) do produto %i com %i gramas? ", id, peso1);
	scanf("%f", &preco1);
	printf("\nEmbalagem 2 de quantos gramas? ");
	scanf("%i", &peso2);
	printf("\nPreco (R$) do produto %i com %i gramas? ", id, peso2);
	scanf("%f", &preco2);

	// logica

	X1 = preco1/peso1;
	X2 = preco2/peso2;

	//saidas
	printf("\n\n");
	printf("\n A grama na Embalagem 1 esta custando R$%.3f", X1);
	printf("\n A grama na Embalagem 2 esta custando R$%.3f\n", X2);
	return 0;
}