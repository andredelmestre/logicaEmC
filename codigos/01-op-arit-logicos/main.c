#include <stdio.h>

// comentario de linha
/* comentario de bloco */

/* 
	comentario de bloco
 */
int main (){
	/****************************
	*  DECLARACAO DE VARIAVEIS  *    
	*****************************/
	int a=2, b=3, c, cont, i, ac;

	/************************* 
	*   operadores logicos   *
	**************************/
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
	
	c= a && 0;
	printf("V ou F? %i\n", c);
	c= b || 0;
	printf("V ou F? %i\n", c);
	printf("V ou F? %i\n", -1&&1);
	printf("V ou F? %i\n", 0||5);


	/*********************************** 
	*   Novos operadores aritmeticos   *
	************************************/
	cont=0; i=10; ac=1;

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
	ac*=3;
	printf("ac= %i\n", ac);
	//multiplica 3 ao conteudo da variavel 'ac' e armazena o resultado em 'ac'
	ac/=2;
	printf("ac= %i\n", ac);


	return 0;
}