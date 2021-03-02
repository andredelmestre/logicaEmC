#include <stdio.h>

// Fonte: Sindifisco/RS
// Bandeira verde: A tarifa não sofre nenhum acréscimo.
// Bandeira amarela: Acréscimo de R$ 1,34 por 100 kWh consumidos.
// Bandeira vermelha - Patamar 1: Acréscimo de R$ 4,16 por 100 kWh consumidos.
// Bandeira vermelha - Patamar 2: Acréscimo de R$ 6,24 para cada 100 kWh.

int main() {
	
    float qtd_kWh, valor_TUSD_kWh, valor_TE_kWh, outros; 
    char bandeira;
 	
 	// 54.4 de imposto na bandeira

    //entradas
 	printf("Digite o consumo mensal: \n");   
    scanf( "%f", &qtd_kWh );
 	printf("Digite o valor da tarifa *TUSD* de 1 kWh: \n");   
    scanf( "%f", &valor_TUSD_kWh );
 	printf("Digite o valor da tarifa *TE* de 1 kWh: \n");   
    scanf( "%f", &valor_TE_kWh );
 	printf("Digite a bandeira:\n");
 	printf(" v(E)rde,\n (A)marela,\n (V)ermelha 1,\n ve(R)melha 2\n");   
    scanf( " %c", &bandeira );
 	printf("Digite outros debitos: \n");   
    scanf( "%f", &outros );

    //logica
    float valor_a_pagar=0, add_bandeira=0, porc_acrescimo=0; 
    valor_a_pagar = qtd_kWh * valor_TUSD_kWh;
    valor_a_pagar += qtd_kWh * valor_TE_kWh;
    valor_a_pagar += outros;

    switch(bandeira){
    	case 'e':
    	case 'E':
    		add_bandeira = 0;
    	break;
    	case 'a':
    	case 'A':
    		add_bandeira = 1.34;
    	break;
    	case 'v':
    	case 'V':
    		add_bandeira = 4.16;
    	break;
    	case 'r':
    	case 'R':
    		add_bandeira = 6.24;
    	break;
    	default:
    		add_bandeira = 0;
    	break;
    }

    add_bandeira *= 1.544 * qtd_kWh / 100;

    porc_acrescimo = add_bandeira / valor_a_pagar * 100;
    //saidas
 	printf("SAIDAS\nVoce DEVERIA pagar %f reais\n", valor_a_pagar);

 	printf("Por causa da bandeira, ");
	printf("voce vai pagar %f reais, \n", valor_a_pagar + add_bandeira);
 	printf("Sua conta ficou %f%% mais caro\n", porc_acrescimo);

	return 0;
}