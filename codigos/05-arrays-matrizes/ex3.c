#include <stdio.h>
#include <stdlib.h>
#define LINHAS 10
#define COLUNAS 10

/*
	preenche A MATRIZ com 0
	preenche a diagonal principal com o primeiro número digitado
	preenche a diagonal secundária com o segundo número digitado
	imprime a matriz resultate
*/

int main (){
	//DECLARA
	int i, j, cont, m[LINHAS][COLUNAS];


	//ENTRADA - PREENCHE
	cont=0;
	for(i=0; i<(LINHAS+1)/2; i++){
		for(j=0; j<(COLUNAS+1)/2; j++){
			if(i<j){
				m[i][j] = i;
				m[LINHAS - i - 1][j] = i;
				m[i][COLUNAS - j - 1] = i;
				m[LINHAS - i - 1][COLUNAS - j - 1] = i;
			}else{
				m[i][j] = j;
				m[LINHAS - i - 1][j] = j;
				m[i][COLUNAS - j - 1] = j;
				m[LINHAS - i - 1][COLUNAS - j - 1] = j;
			}
		}
	}

	//SAIDA - MOSTRA RESULTADO
	printf("MATRIZ\n"); 
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%3i ", m[i][j]); 
		}
		printf("\n"); 
	}

	//ENTRADA - PREENCHE
	cont=0;
	for(j=0; j<COLUNAS; j++){
		for(i=0; i<LINHAS; i++){
			m[i][j] = cont;
			cont++;
		}
	}

	//SAIDA - MOSTRA RESULTADO
	printf("MATRIZ\n"); 
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%3i ", m[i][j]); 
		}
		printf("\n"); 
	}



	//ENTRADA - PREENCHE
	cont=0;
	for(j=0; j<COLUNAS; j++){
		for(i=0; i<LINHAS; i++){
			m[i][COLUNAS - j - 1] = cont;
			cont++;
		}
	}

	//SAIDA - MOSTRA RESULTADO
	printf("MATRIZ\n"); 
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%3i ", m[i][j]); 
		}
		printf("\n"); 
	}


	//ENTRADA - PREENCHE
	cont=0;
	for(j=COLUNAS-1; j>=0; j--){
		for(i=0; i<LINHAS; i++){
			m[i][j] = cont;
			cont++;
		}
	}

	//SAIDA - MOSTRA RESULTADO
	printf("MATRIZ\n"); 
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%3i ", m[i][j]); 
		}
		printf("\n"); 
	}

	//ENTRADA - PREENCHE
	cont=0;
	for(i=LINHAS-1; i>=0; i--){
		for(j=COLUNAS-1; j>=0; j--){
			m[i][j] = cont;
			cont++;
		}
	}

	//SAIDA - MOSTRA RESULTADO
	printf("MATRIZ padrao 4 solucao 1\n"); 
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%3i ", m[i][j]); 
		}
		printf("\n"); 
	}

	//ENTRADA - PREENCHE
	cont=0;
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			m[LINHAS - i - 1][COLUNAS - j - 1] = cont;
			cont++;
		}
	}

	//SAIDA - MOSTRA RESULTADO
	printf("MATRIZ padrao 4 solucao 2\n"); 
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			printf("%3i ", m[i][j]); 
		}
		printf("\n"); 
	}


	return 0;
}