#include <stdio.h>
void main()
{
	int n, user;

	printf("Introduza um numero: "); scanf("%d", &user);

	for(n = 1; n <= user; n++)
	  {
		printf("%02d %02d\n", n, user - n + 1);
	  }
}
