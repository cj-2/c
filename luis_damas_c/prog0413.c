#include <stdio.h>
void main()
{
	int n, n2, n3;

	for(n = 1; n <= 10; n++)
	  {
		n3 = n;
		for(n2 = 1; n2 <= n3; n2++)
		  {
			printf("%02d ", n2);
		  }
		printf("\n");

	  }
}
