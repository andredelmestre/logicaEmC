#include <stdio.h>

int main (){
	int a,b;

	printf("digite um numerador\n");
	scanf("%i", &a);
	printf("digite o denominador\n");
	scanf("%i", &b);

	if(b){
		if( a%b )
			printf("\n %i / %i NAO eh uma divisao exata\n", a, b);
		else
			printf("\n %i / %i eh uma divisao exata\n", a, b);
	}else{
		printf("\n ERRO NAO EXISTE DIVISAO POR ZERO\n");
	}
	
	return 0;
}

