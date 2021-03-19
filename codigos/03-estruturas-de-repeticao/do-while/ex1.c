#include <stdio.h>

/* 
 * no do-while a ordem de construcao da repeticao muda e o teste vai para o fim!
 * Por isso, eh sempre garantida ao menos uma repeticao
 */

int main (){
	// 1 - INICIALIZA e delclara variaveis
	int cont=-1;
	float soma=0, n=0;
	do{
		// 2 - ACAO
		soma+=n;	//soma=soma+n
		cont++;		//cont=cont+1
		// 3 - ATUALIZA
		printf("digite um numero real (num negativo sai do prgrama)\n");
		scanf("%f", &n);
		// 4 - TESTA
	} while(n>=0);

	if(cont==0)
		printf("\nVoce saiu sem digitar numeros positivos\n");
	else{
		soma/=cont;	// soma=soma/cont
		printf("\nA media dos numeros digitados eh %f\n", soma);
	}

	return 0;
}