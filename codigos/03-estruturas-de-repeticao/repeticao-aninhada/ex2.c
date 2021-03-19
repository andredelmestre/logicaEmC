#include <stdio.h>
#include <stdlib.h>

/* 
 * Caixa de supermecado (Prova de logica de 2018)
 */

int main (){
	// 1 - INICIALIZA e declara
	float totalcaixa=0, vproduto=0, total=0, totaltroco=0, troco=0, pagamento=0;
	char opcao;
	printf("\n----Programa Caixa----\n");
	do{
		do{
			// 2 - ACAO
			total+=vproduto;
			totalcaixa+=vproduto;
			// 3 - ATUALIZA
			printf("Informe o valor do produto:\n");
			scanf("%f", &vproduto);
			// 4 - TESTE
		} while(vproduto > 0);
		// 2 - ACAO
		printf("\n TOTAL = R$%.2f\n", total);
		printf("\n Pagar em dinheiro? 0-nao\t1-sim\n");
		scanf("%i", &opcao);
		if(opcao){
			printf("informe o valor do pagamento\n");
			scanf("%f", &pagamento);
			troco=pagamento-total;
			totaltroco+=troco;
			printf("Troco R$%f\n", troco);
		}
		// 3 - ATUALIZA
		printf("\n Sair? 0-sim\t1-nao\n");
		scanf("%i", &opcao);
		total=0;
		system("cls|clear");
		// 4 - TESTE
	} while(opcao);

	printf("\nValor total do caixa = %.2f\n", totalcaixa);
	printf("\nValor total do troco = %.2f\n", totaltroco);

	return 0;
}