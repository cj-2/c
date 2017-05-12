#include <stdio.h>
void main(){
	int mes;
	printf("Informe o mes: "); scanf(" %d", &mes);

	if (mes == 2)
		printf("O mês tem 28 dias (29 em anos bissextos.).\n");

	else
	{
		if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
			printf("O mês tem 30 dias.\n");

		else
			if(mes < 1 || mes > 12)
				printf("Mês inválido.\n");

			else
				printf("O mês tem 31 dias.\n");
	}
}
