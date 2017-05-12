#include <stdio.h>
void main()
{
	int n, n2, user;

	printf("Introduza um numero: "); scanf("%d", &user);

	for(n = 1, n2 = user; n <= user; n++, n2--)
	  {
		printf("%02d %02d\n", n, n2);
	  }
}
