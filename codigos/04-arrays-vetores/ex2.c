#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100
/*
	preenche vetor com valores aleatorios entre 0 e 99
	e busca a posição de um numero digitado pelo usuario entre 0 e 99
	imprime o vetor no final apenas para fins de debug
*/

int main (){
	//DECLARA
	int i, x[TAMANHO], num;

	//ENTRADA - PREENCHE
	for(i=0; i<TAMANHO; i++){
		x[i] = rand()%TAMANHO;
	}
	printf("Digite um numero a ser buscado (entre 0 e 99)\n");
	scanf("%i", &num);	

	//PROCESSAMENTO - busca a primeira ocorrencia do numero
	i=0;
	while(x[i]!=num && i<TAMANHO){
		i++;
	}

	//SAIDA - MOSTRA RESULTADO
	if(i<TAMANHO){
		printf("\n\nnumero %i encontrado na posicao %i\n\n", num, i); 
	}else{
		printf("\n\nnumero %i nao foi encontrado\n\n", num); 
	}

	//DEBUG
	// for(i=0; i<TAMANHO; i++){
	// 	printf("x[%i] = %i\n", i, x[i]); 
	// }

	return 0;
}