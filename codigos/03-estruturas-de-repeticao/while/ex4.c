#include <stdio.h>
#include <stdlib.h>

/* While com duas variaveis de controle! */

int main (){
	int cont;
	float peso, peso_total;

	// 1 - INICIALIZA
	cont = 0;
	peso = 0.0;
	peso_total = 0.0;
	// 2 - TESTA
	while(cont < 15 && peso_total < 800.0){
		// 3 - ACAO
		printf("ELEVADOR: PODE ENTRAR\n");
		printf("peso total = %.1f \t quantidade de pessoas = %i\n", peso_total, cont);
		printf("\nDigite o peso medido:\n");
		scanf("%f", &peso);
		// 4 - ATUALIZA
		peso_total+=peso;
		cont++;
		system("cls");
	}
	printf("ELEVADOR: LOTADO\n");
	printf("peso total = %.1f \t quantidade de pessoas = %i\n", peso_total-peso, cont-1);

	return 0;
}