#include <stdio.h>
void main(){
	int dia, mes, ano;
	printf("Informe uma data dd/m/aaaa: "); scanf(" %d/%d/%d", &dia, &mes, &ano);

	printf("O dia está: ");

	switch(mes){
		case 2 : if ((ano % 4 == 0 && ano % 100 != 0) || ano%400 == 0)
			{
				if(dia > 29 || dia < 1)
					printf("Inválido.\n");
				else
					printf("Correto.\n");
			}

			else
			{
				if(dia > 28 || dia < 1)
			 		printf("Inválido.\n");
				else
					printf("Correto.\n");

			 } break;

		case 4 :
		case 6 :
		case 9 :
		case 11 : if(dia > 30 || dia < 1)
			{
				printf("Inválido.\n");
		 	}

			else
			{
				printf("Correto.\n");
			} break;

		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 : if(dia > 31 || dia < 1){
				printf("Inválido.\n");
			  } else{
                                        printf("Correto.\n");
                                } break;
	}

	printf("O mês está: ");

	if(mes > 12 || mes < 1)
		printf("Incorreto.\n");

	else
		printf("Correto.\n");

	printf("O Ano está: ");

	if(ano < 0 )
		printf("Incorreto.\n");
	else
		printf("Correto.\n");
}
