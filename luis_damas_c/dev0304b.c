#include <stdio.h>
void main(){
	int mes, n_dias;
	printf("Informe o mes: "); scanf(" %d", &mes);

	switch(mes){
		case 2 : printf("O mês possui 28 dias e 29 em anos bissextos.\n"); break;
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 : printf("O mês possui 31 dias.\n"); break;
		case 4 :
		case 6 :
		case 9 :
		case 11 : printf("O mês possui 30 dias.\n"); break;

		default : printf("Mês inválido.\n");
	}
}
