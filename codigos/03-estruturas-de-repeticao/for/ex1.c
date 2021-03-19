#include <stdio.h>

/* FOR - repeticao contada
 * As etapas para construir uma repeticao sao:
 * 1 - inicializacao da variavel de controle
 * 2 - teste da variavel de controle. Se resultado eh verdadeiro, a repeticao continua
 * 3 - acao - linhas de comando que resolvem o problema e nao estao necessariamente vinculados a variavel de controle
 * 4 - atualizacao da variavel de controle. Deve convergir de acordo com o teste (passo 2).
 * O FOR resume as tres etapas relativas a variavel de controle em uma linha.
 * A etapa da acao fica dentro do bloco de codigo do for 
 * Formula geral:
 * for(inicializa; teste; atualiza){ 
 *    acao 
 * }
*/

int main (){
	// declara a variavel de controle
	int cont;

	for(cont=0; cont<10; cont++){ 
		printf("cont = %i\n", cont);
	}

	//comentado abaixo o mesmo programa com while
	/*
	cont=0;
	while(cont<10){
		printf("cont = %i\n", cont);
		cont++;
	}
	*/

	return 0;
}