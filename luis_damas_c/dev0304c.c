#include <stdio.h>
void main(){
	int mes, n_dias = 0;
	printf("Informe o mes: "); scanf(" %d", &mes);

	switch(mes){
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 : n_dias = n_dias + 1;
		case 4 :
		case 6 :
		case 9 :
		case 11 : n_dias = n_dias + 2;
		case 2 : n_dias = n_dias + 28;

		default : printf("O mês tem %d\n", n_dias);
	}
}
