#include <stdio.h>
void main()
{
	int n, n2;

	for(n = 1; n <= 10; n++)
	  {
		for(n2 = 1; n2 <= 10; n2++)
		  {
			printf("%02d ", n2);

			if (n2 == n)
			  break;
		  }
		printf("\n");

	  }
}
