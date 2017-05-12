
//	Resolução da apostila, porém caso seja adicionado o primeiro número
//	multiplo de 10, o progama não faz nada.

#include <stdio.h>
void main()
{
	int i, n;

	printf("Introduza um numero: "); scanf(" %d", &n);

	//Cria um laço infinito.
	for( i = n; ; i++)
	  {
		//Veri. se o número é multiplo de 10.
		if (i%10 == 0)
		  break;

		else
			//Veri. se o número é multiplo de 3.
			if(i%3 == 0)
			  continue;

		//Caso nada acima seja verdade, o numero será impresso.
		printf("%d\n",i);
	  }
}
