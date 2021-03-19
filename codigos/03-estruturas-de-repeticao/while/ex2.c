#include <stdio.h>
#include <stdio.h>

/* Repare como esta estrutura tambem eh igual aos exemplos anteriores! */

int main (){
	int cont=0;
	float soma=0.0;
	// declara a variavel de controle
	float n;

	// 1 - INICIALIZA
	printf("digite um numero real (num negativo sai do prgrama)\n");
	scanf("%f", &n);

	// 2 - TESTA
	while(n>=0){
		// 3 - ACAO
		soma+=n;	//soma=soma+n
		cont++;		//cont=cont+1
		// 4 - ATUALIZA
		printf("digite um numero real (num negativo sai do prgrama)\n");
		scanf("%f", &n);
	}

	if(cont==0)
		printf("\nVoce saiu sem digitar numeros positivos\n");
	else{
		soma/=cont;	// soma=soma/cont
		printf("\nA media dos numeros digitados eh %f\n", soma);
	}

	return 0;
}