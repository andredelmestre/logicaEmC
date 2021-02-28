#include <stdio.h>

int main (){
	float nota;

	printf("digite a nota do aluno\n");
	scanf("%f", &nota);

	printf("\nresolvendo o problema com E - &&\n");
	if( (nota>=0.0 && nota<=10.0) ){
		printf("Nota Valida\n");
		if(nota>=6.0){
			printf("Aluno(a) aprovado(a)\n");
		}else{
			printf("Aluno(a) em reavaliacao\n");
		}
	}else{
		printf("Nota Invalida\n");
	}


	printf("\nresolvendo o problema com OU - ||\n");
	if((nota<0 || nota>10)){
		printf("Nota Invalida\n");
	}else{
		printf("Nota Valida\n");
		if(nota>=6.0){
			printf("Aluno(a) aprovado(a)\n");
		}else{
			printf("Aluno(a) em reavaliacao\n");
		}
	}

	
	return 0;
}