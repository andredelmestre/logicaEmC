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
	// Nome das variaveis utilizam digitos (0-9), letras (A-Z, a-z) e underline(_)
	// Comece necessariamemte por uma letra
	// Minusculas e maiusculas FAZEM diferenca
	// Palavras reservadas nao sao permitidas (ex: include, return)
	int cont=5, x, X, xis;
	float nota_1=0.0, nota_2=9.5;
	char ch;
	int outra_var;

	/********************** 
	*   SEU CODIGO AQUI   *
	***********************/
	// 1 - Atribuindo valores para uma variavel
	// voce pode atribuir ja na declaracao
	cont=0;			//int
	nota_1=8.5;		//float
	ch='N';			//char

	// 2 - Saída de Dados: printf()
	printf("Hello world!\n\n\n");
	printf("cont=%05i \n", cont);
	printf("nota_2=%.2f\n", nota_2);
	printf("ch=%c\n\n", ch);

	//modificadores de texto: 
	// \n Nova linha
	// \t Tabulacao Horizontal
	// \\ Escreve contra barra \
	// \" Escreve aspas duplas "
	// %% Escreve porcento
	// %i Escreve valor de uma variavel int
	// %f Escreve valor de uma variavel float
	// %c Escreve valor de uma variavel char


	// 3 - Entrada de Dados: scanf()
	// %i Le valor de uma variavel int
	// %f Le valor de uma variavel float
	// %c Le valor de uma variavel char
	// recomendo ler os dados um de cada vez
	printf("Digite um caracter\n");
	scanf("%c", &ch);
	printf("Digite um numero inteiro\n");
	scanf("%i", &cont);
	printf("Digite um numero real\n");
	scanf("%f", &nota_1);

	// mas a escrita pode ser toda de uma vez
	printf("\n\nVoce escreveu:\n %c\t%i\t%f\n\n", ch, cont, nota_1);

	return 0;
}