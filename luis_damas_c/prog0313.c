#include <stdio.h>
void main()
{
	char civil;

	printf("Digite a letra inicial do seu estado civil: ");
	scanf(" %c", &civil);

	switch (civil){
		case 'C' :
		case 'c' : printf("Casado\n"); break;
		case 'S' :
		case 's' : printf("Solteiro\n"); break;
		case 'D' :
		case 'd' : printf("Divorciado\n"); break;
		case 'V' :
		case 'v' : printf("Viuvo\n"); break;

		default : printf("Estado Civil INCORRETO!\n");
	}
}
