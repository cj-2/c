
//	Impressão de todos os caractéres da tabela ASCII.
// 	Pausa a cada 20 linhas.

#include <stdio.h>
void main()
{
	int n, n2;

	for(n = 0; ;)
	  {
		for(n2 = 1; n2 <= 20; n2++)
		  {
	  		printf("%03d -> %c \n", n, (char) n);
			n++;

			if (n == 255)
			  break;
		  }

		if (n == 255)
		  break;

		printf("Enter para continuar!");
		getchar();
	  }
}
