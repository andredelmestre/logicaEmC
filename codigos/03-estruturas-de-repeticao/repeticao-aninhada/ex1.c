#include <stdio.h>

int main (){
	int i, j;
	printf("DOMINO!\n\n");
	for(i=0; i<=6; i++){ 
		for(j=0; j<=i; j++){ 
			printf("%i-%i\t", i, j);
		}
		printf("\n");
	}
	return 0;
}