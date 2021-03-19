#include <stdio.h>

int main (){
	// declara a variavel de controle
	int cont=0, n=0, digito=0;

	// 1 - INICIALIZA
	printf("Leia numero\n");
	scanf("%i", &n);
	// 2 - TESTA
	while(n > 0){
		// 3 - ACAO
		digito = n%10;
		cont++;
		printf("Digito %i -> %i\n", cont, digito);
		// 4 - ATUALIZA
		n=n/10;
	}

	return 0;
}