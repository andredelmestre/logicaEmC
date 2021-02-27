#include <stdio.h>

int main (){

	int num, anos, semanas, dias, aux;
	printf("Digite num de dias\n");
	scanf("%i", &num);

	anos = num / 365;	// 3 anos
	printf("%i dias tem %i anos, ", num, anos);

	aux = num % 365; 	// 234 dias
	semanas = aux / 7;	// 33 semanas
	printf("%i semanas e ", semanas);

	dias = aux % 7;		// 3 dias
	printf("%i dias\n\n\n", dias);

	// 3*365 + 33*7 * 3 = 1329 dias

	return 0;
}