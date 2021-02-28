#include <stdio.h>
// 1 - segunda
// 7 - domingo
int main (){
	int a;

	printf("digite um numero\n");
	scanf("%i", &a);

	if(a>=1 && a<=5){
		printf("\n %i eh dia de semana!\n", a);
	}else if(a == 6 || a == 7){
		printf("\n %i eh fim de semana!\n", a);
	}else{
		printf("ERRO!\n", a);
	}

	if(a==1){
		printf("%i cai numa segunda-feira!\n", a);
	}else if(a==2){
		printf("%i cai numa terca-feira!\n", a);
	}else if(a==3){
		printf("%i cai numa quarta-feira!\n", a);
	}else if(a==4){
		printf("%i cai numa quinta-feira!\n", a);
	}else if(a==5){
		printf("%i cai numa sexta-feira!\n", a);
	}else if(a==6){
		printf("%i cai num sabado!\n", a);
	}else if(a==7){
		printf("%i cai num domingo!\n", a);
	}else{
		printf("ERRO!\n", a);
	}


	return 0;
}