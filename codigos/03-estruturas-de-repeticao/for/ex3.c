#include <stdio.h>

/* O passo do for nao precisa ser linear.
 * pode ser algo nao -linear como uma multiplicacao ou divisao.
*/

int main (){
	// declara a variavel de controle
	int i, n;

	printf("Diga um numero: \n");
	scanf("%i", &n);

	printf("Digitos do numero digitado:\n\n");
	//for(inicializa; teste; atualiza){ 
	for(i=n; i>0; i/=10){ 
		//acao 
		printf("%i\n", i%10);
	}

	return 0;
}