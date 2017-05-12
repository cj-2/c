#include <stdio.h>
void main()
{
	char civil;

	printf("Digite a letra inicial do seu estado civil: ");
	scanf(" %c", &civil);

	if (civil == 'c' || civil == 'C')
	printf("Vocé é casado!\n");

	else{
		if(civil == 's' || civil == 'S')
		printf("Você é solteiro!\n");

		else{
			if(civil == 'd' || civil == 'D')
			printf("Você é divorciado!\n");

			else{
				if(civil == 'v' || civil == 'V')
				printf("Você é viuvo!\n");

				else
				printf("Estado civil não encontrado!\n");
			}
		}
	}
}
