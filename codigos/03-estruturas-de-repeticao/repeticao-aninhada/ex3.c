#include <stdio.h>
#include <stdlib.h>

/* 
	Este exercicio corresponde ao fluxograma da Prova 0
*/

int main (){
	int nProvas, cont=0;
	float notaProva, notaLista, Nota=0;

	// 1 - INICIALIZACAO
	printf("\nDigite o numero de provas:\n");
	scanf("%i", &nProvas);
	do{
		// 2 - ACAO
		printf("\n qual a nota da prova %i:\n", cont+1);
		scanf("%f", &notaProva);
		printf(" digite a nota da lista de exercicios %i: \n", cont+1);
		scanf("%f", &notaLista);
		// 3 - ATUALIZA
		cont++;
		Nota += 0.3*notaLista+0.7*notaProva;
		system("cls|clear");
		// 4 - TESTE
	} while(nProvas > cont);

	printf("\nnota total = %.2f\n", Nota/nProvas);

	return 0;
}