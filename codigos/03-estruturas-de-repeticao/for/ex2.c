#include <stdio.h>

/* Um enunciado possivel para este programa:
 * Imprime os numeros multiplos de 3 de 300 até 0 em ordem decrescente
*/

int main (){
	// declara a variavel de controle
	int i;

	//for(inicializa; teste; atualiza){ 
	for(i=300; i>0; i-=3){ 
		//acao 
		printf("%i, ", i);
	}
	printf("\n");

	return 0;
}