#include <stdio.h>
void main()
{
	int n;

	for(n = 1; n <= 100; n++)
	  {
		if (n == 30)
		  break;

		else
		  printf("%02d\n", 2*n);
	  }

	printf("Fim do Progama.\n");
}
