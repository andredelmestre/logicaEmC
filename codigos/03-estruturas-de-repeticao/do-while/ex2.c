#include <stdio.h>
#include <stdlib.h>

/* 
 * no do-while a ordem de construcao da repeticao muda e o teste vai para o fim!
 * Por isso, eh sempre garantida ao menos uma repeticao
 */

int main (){
	int cont;
	float peso, peso_total;

	// 1 - INICIALIZACAO
	peso = 0.0;
	// OBS: cont peso_total sao acumuladores e, portanto, necessitam obrigatoriamente de inicializacao
	cont = 0;
	peso_total = 0.0;
	do{
		// 2 - ACAO
		printf("ELEVADOR: PODE ENTRAR\n");
		printf("peso total = %.1f \t quantidade de pessoas = %i\n", peso_total, cont);
		printf("\nDigite o peso medido:\n");
		scanf("%f", &peso);
		// 3 - ATUALIZA
		peso_total+=peso;
		cont++;
		system("cls");
		// 4 - TESTE
	} while(cont < 15 && peso_total < 800.0);

	printf("ELEVADOR: LOTADO\n");
	printf("peso total = %.1f \t quantidade de pessoas = %i\n", peso_total-peso, cont-1);

	return 0;
}