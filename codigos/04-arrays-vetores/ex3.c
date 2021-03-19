#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

/*
	preenche vetor com valores aleatorios entre 0 e 99
	ordena o vetor (bubble sort)
	imprime o vetor no final apenas para fins de debug
*/

int main (){
	//DECLARA
	int i, j, aux, x[TAMANHO];

	//ENTRADA - PREENCHE
	for(i=0; i<TAMANHO; i++){
		x[i] = rand()%100;
	}

	printf("ANTES\n"); 
	for(i=0; i<TAMANHO; i++){
		printf("x[%i] = %i\n", i, x[i]); 
	}
	
	//PROCESSA - ordena vetor - bubble sort
	for(i=0; i<TAMANHO-1; i++){ 
		for(j=i+1; j<TAMANHO; j++){ 
			if(x[i] < x[j]){
				aux=x[i];
				x[i]=x[j];
				x[j]=aux;
			}
		}
	}

	printf("DEPOIS\n"); 
	//SAIDA - DEBUG para mostrar vetor ordenado
	for(i=0; i<TAMANHO; i++){
		printf("x[%i] = %i\n", i, x[i]); 
	}

	return 0;
}