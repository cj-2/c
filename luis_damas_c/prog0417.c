#include <stdio.h>
void main()
{
	int q, r, r2;
	char c;

	printf("Introduza um numero: "); scanf(" %d", &q);
	printf("Introduza um caractére: "); scanf(" %c", &c);

	for(r = 1; r <= q; r++)
	  {
		for(r2 = 1; r2 <= q; r2++)
		  printf("%c",c);

		printf("\n");
	  }
}
