#include <stdio.h>
#include <stdlib.h>
#define LINHAS 6
#define COLUNAS 6

/*
	preenche A MATRIZ com 0
	preenche a diagonal principal com o primeiro número digitado
	preenche a diagonal secundária com o segundo número digitado
	imprime a matriz resultate
*/

int main (){
	//DECLARA
	int i, j, num, m[LINHAS][COLUNAS];
	int principal[LINHAS], secundaria[LINHAS];

	//ENTRADA - PREENCHE
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			m[i][j] = 0;
		}
	}

	//PROCESSAMENTO - busca a primeira ocorrencia do numero
	printf("diga um numero\n");
	scanf("%i", &num);
	i=0; 
	while(i<LINHAS){
		m[i][i] = num;
		i++;
	}

	printf("diga um numero\n");
	scanf("%i", &num);
	i=0; j=COLUNAS-1;
	while(i<LINHAS){
		m[i][j] = num;
		i++; j--;
	}	


	//SAIDA - MOSTRA RESULTADO
	printf("MATRIZ\n"); 
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%3i ", m[i][j]); 
		}
		printf("\n"); 
	}

	return 0;
}