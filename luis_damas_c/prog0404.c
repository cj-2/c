#include <stdio.h>
void main()
{
	int n = 1, u;

	printf("Qual tabuada quer ler? "); scanf(" %d",&u);

	while(n <= 10)
	{
		printf("%02d x %02d = %02d\n",u,n,u*n);
		n++;
	}
}
