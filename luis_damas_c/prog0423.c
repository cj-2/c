
//	Impressão de todos os caractéres da tabela ASCII.
// 	Pausa a cada 20 linhas.

#include <stdio.h>
void main()
{
	int n, n2, cup;

	printf("Escreva dois números entre 0 e 255: "); scanf(" %d %d", &n, &n2);

	if (n2 < n)
	  {
		cup = n;
		n = n2;
		n2 = cup;
	  }

	if(n < 0 || n2 > 255)
	  printf("Números inválidos.\n");

	else
	  {
		for(; n < n2; n++)
		  {
			printf("%02d --> %c\n", n, (char) n);
		  }
	  }
}
