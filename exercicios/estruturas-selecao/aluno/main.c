#include <stdio.h>

int main (){
	char aluno_dp;
	float nota, reav, freq;

	printf("digite a nota do aluno\n");
	scanf("%f", &nota);
	printf("digite a frequencia do aluno\n");
	scanf("%f", &freq);
	printf("Aluno (R)egular ou (D)ependente\n");
	scanf(" %c", &aluno_dp);

	if(nota>=6 && freq>=75){
		printf("\nALUNO APROVADO!\n");
	}else{
		if(aluno_dp=='D' || freq>=75){
			printf("digite a nota reavaliacao\n");
			scanf("%f", &reav);
			if(reav>=6 || nota>=6){
				printf("\nALUNO APROVADO!\n");
			}else{
				printf("\nALUNO REPROVADO!\n");
			}
		}else{
			printf("\nALUNO REPROVADO!\n");
		}
	}

	return 0;
}
