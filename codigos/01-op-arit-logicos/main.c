#include <stdio.h>

int main (){
	/*********************************** 
	*   Novos operadores aritmeticos   *
	************************************/
	int cont=0, i=10, ac=1;

	//todas as operacoes abaixo somam 1 a variavel 'cont'
	cont=cont+1;
	printf("cont= %i\n", cont);
	cont+=1;
	printf("cont= %i\n", cont);
	cont++;
	printf("cont= %i\n", cont);

	//demonstracao da diferenca entre '--i' e 'i--'
	i--;
	printf("i= %i\n", i);		// imprime i=9
	printf("i= %i\n", i--);		// imprime i=9
	printf("i= %i\n", i);		// imprime i=8
	printf("i= %i\n", --i);		// imprime i=7

	//multiplica 3 ao conteudo da variavel 'ac' e armazena o resultado em 'ac'
	ac*=7;
	printf("ac= %i\n", ac);
	//divide por 2 ao conteudo da variavel 'ac' e armazena o resultado em 'ac'
	ac/=2;
	printf("ac= %i\n", ac);
	//divide por 2 ao conteudo da variavel 'ac' e armazena o resultado em 'ac'
	ac%=2;
	printf("ac= %i\n", ac);

	printf("\n\n\n\n\n\n");

	/************************* 
	*   operadores logicos   *
	**************************/
	int a=2, b=3, c;

	c=0!=1;
	printf("V ou F? %i\n", c);
	c=1==0;
	printf("V ou F? %i\n", c);
	c=a>2;
	printf("V ou F? %i\n", c);
	c=a>=b;
	printf("V ou F? %i\n", 1>=2);
	printf("V ou F? %i\n", a<b);
	printf("V ou F? %i\n", b<5);
	
	c = !8;
	printf("V ou F? %i\n", c);
	c= a && 0;
	printf("V ou F? %i\n", c);
	c= b || 0;
	printf("V ou F? %i\n", c);
	printf("V ou F? %i\n", -1&&1);
	printf("V ou F? %i\n", 0||5);


	return 0;
}