#include <stdio.h>
void main()
{
	int n;

	for(n = 1; n <= 100; n++)
	  {
		if (n == 60)
		  break;

		else
		  if (n%2 == 1)
		    continue;

		  else
		   printf("%02d\n", n);
	  }

	printf("Fim do Progama.\n");
}
