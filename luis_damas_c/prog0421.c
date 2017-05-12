
//	Um progama que só aceita um numero entre 1 a 100.

#include <stdio.h>
void main()
{
	int n, t;

	do
	  {
		printf("Insira um numero: "); scanf(" %d", &n);

		if (n <= 100 && n >= 1)
		  {
		  	printf("Obrigado e até mais!\n");
		  	t = 0;
		  }

		else
		  {
		  	printf("Número errado, coninue tentando!\n");
		  	continue;
		  }
	  }

	while(t);
}
