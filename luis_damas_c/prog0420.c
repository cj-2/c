
//	Meia "Arvore de Natal".

#include <stdio.h>
void main()
{
	int i, i2, n;

	printf("Número de ramos: "); scanf(" %d", &n);

	//Laço principal.
	for(i = 1; i <= n; i++)
	  {
		for(i2 = 1; i2 <= i; i2++)
		  printf("%c", (char) i + 64);

		printf("\n");
	  }
}
