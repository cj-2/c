#include <stdio.h>
void main()
{
	float money, taxa;
	char civil;

	printf("Digite seu dim dim: ");
	scanf(" %f", &money);

	printf("É casado 'c' ou solteiro 's'? ");
	scanf(" %c", &civil);

	if (civil == 'c' || civil == 'C'){
		taxa = 0.09;
	        printf("O seu imposto pago sera de %d%, sendo assim equivalente a %.2f reais.\n", (int)(100 * taxa), taxa * money);
	}

	else{
		if( civil == 's' || civil == 'S'){
			taxa = 0.10;
	        	printf("O seu imposto pago sera de %d%, sendo assim equivalente a %.2f reais.\n", (int)(100 * taxa), taxa * money);
		}
		else
		printf("Caractere inválido.\n");
	}
}
