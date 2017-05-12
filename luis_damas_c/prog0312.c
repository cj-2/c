#include <stdio.h>
void main()
{
	char civil;

	printf("Digite a letra inicial do seu estado civil: ");
	scanf(" %c", &civil);

	switch (civil){
		case 'c' : printf("Casado\n"); break;
		case 's' : printf("Solteiro\n"); break;
		case 'd' : printf("Divorciado\n"); break;
		case 'v' : printf("Viuvo\n"); break;
		default : printf("Estado Civil INCORRETO!\n");
	}
}
