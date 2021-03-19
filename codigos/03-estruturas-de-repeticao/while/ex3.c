#include <stdio.h>

/* Repare como esta estrutura eh igual ao exemplo anterior! */

int main (){
	// declara a variavel de controle
	unsigned int cont;

	// 1 - INICIALIZA
	cont=0;
	printf("####################\n");
	printf("### Tabela ASCII ###\n");
	printf("####################\n\n");
	// 2 - TESTA
	while(cont<254){
		// 3 - ACAO
		printf("%i = %c\n", cont, cont);
		// 4 - ATUALIZA
		cont++;
	}
	printf("%i = %c\n", 255, 255);

	return 0;
}