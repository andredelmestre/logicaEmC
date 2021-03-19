#include <stdio.h>

int main (){
	//DECLARA
	//tipo_dado nome_array[tamanho];
	int i, x[30], y[30], z[5];

	//ENTRADA - PREENCHIMENTO DE VETORES
	// o for eh a estrutura de repeticao mais utilizada para percorrer vetores
	for(i=0; i<30; i++){
		//vetor x eh preenchido com o complemento de 30 em relação a variavel i
		x[i]=30-i;
		//vetor x eh preenchido com o valor da variavel i 		
		y[i]=i; 
	}
	
	// acesso individual aos valores dos vetores eh possivel
	// vetor z eh preenchido individualmente com atribuicao ou leitura de dados
	z[0]=9; z[1]=8;
	scanf("%i", &z[2]);
	scanf("%i", z+3);		//equivalente a scanf("%i", &z[3]);
	scanf("%i", z+4);		//equivalente a scanf("%i", &z[4]);	

	//PROCESSAMENTO - O QUE FAZ ESSE PROGRAMA?
	for(i=0; i<15; i++){ 
		aux=y[i];
		y[i]=y[30-i-1];
		y[30-i-1]=aux;
	}

	//SAIDA - MOSTRA RESULTADO
	for(i=0; i<30; i++){
		printf("x[%i] = %i\ty[%i]=%i\tz[%i]=%i\n", i, x[i], i, y[i], i, z[i]); 
	}

	return 0;
}