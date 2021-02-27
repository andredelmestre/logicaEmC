#include <stdio.h>

int main (){
	int id;
	float precoA, precoB, porcentagem_A_B, porcentagem_B_A;
	// meu programa aqui
	printf("ID do produto: ");
	scanf("%i", &id);
	printf("\nPreco na Loja A (R$): ");
	scanf("%f", &precoA);
	printf("\nPreco na Loja B (R$): ");
	scanf("%f", &precoB);

	porcentagem_A_B = precoA / precoB * 100;
	porcentagem_B_A = precoB / precoA * 100;

	printf("\n\nO produto %i na Loja B custa %.2f%% do valor da Loja A\n", id, porcentagem_B_A);
	printf("O produto %i na Loja A custa %.2f%% do valor da Loja B\n", id, porcentagem_A_B);

	return 0;
}