#include <stdio.h>
void main()
{
	int dia, mes, ano;
	printf("Informe uma data em aaaa mm dd: ");
	scanf("%d-%d-%d", &ano, &mes, &dia);
	printf("Corretamente escrito ficaria: %d/%d/%d.\n", dia, mes, ano);
}
