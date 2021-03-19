#include <stdio.h>
#include <stdlib.h>
#define LINHAS 10
#define COLUNAS 10
/*
	preenche A MATRIZ com valores da soma i+j
	armazena as diagonais nos vetores principal e secundaria
	imprime a matriz e as diagonais para fins de debug
*/

int main (){
	//DECLARA
	int i, j, m[LINHAS][COLUNAS];
	int principal[LINHAS], secundaria[LINHAS];

	//ENTRADA - PREENCHE
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			m[i][j] = i+j;
		}
	}

	//PROCESSAMENTO - busca a primeira ocorrencia do numero
	for(i=0; i<LINHAS; i++){
		principal[i] = m[LINHAS-i-1][LINHAS-i-1];
		secundaria[i] = m[LINHAS-i-1][i];
	}

	//SAIDA - MOSTRA RESULTADO

	printf("MATRIZ\n"); 
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%3i ", m[i][j]); 
		}
		printf("\n"); 
	}

	printf("\n"); 

	//DEBUG
	for(i=0; i<LINHAS; i++){
		printf("principal[%i] = %i \t secundaria[%i] = %i\n", i, principal[i], i, secundaria[i]); 
	}

	return 0;
}