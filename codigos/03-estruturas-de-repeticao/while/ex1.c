#include <stdio.h>

/* Comentarios indicam a estrutura base de qualquer problema utilizando
 * estruturas de repeticao. Toda e qualquer estrutura de repetição tem 
 * pelo menos uma variavel de controle. Exemplos: cont, i, sair...
 * As etapas para construir uma repeticao sao:
 * 1 - inicializacao da variavel de controle
 * 2 - teste da variavel de controle. Se resultado eh verdadeiro, a repeticao continua
 * 3 - acao - linhas de comando que resolvem o problema e nao estao necessariamente vinculados a variavel de controle
 * 4 - atualizacao da variavel de controle. Deve convergir de acordo com o teste (passo 2).
*/

int main (){
	// declara a variavel de controle
	int cont;

	// 1 - INICIALIZA
	cont=0;
	// 2 - TESTA
	while(cont<10){
		// 3 - ACAO
		printf("cont = %i\n", cont);
		// 4 - ATUALIZA
		cont++;
	}

	return 0;
}