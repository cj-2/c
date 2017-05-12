#include <stdio.h>
void main()
{
	int x;
	printf("Informe um numero: ");
	scanf("%d", &x);
	if ( x != 0)
		printf("Seu número %d não é zero!\n",x);
	else
		printf("Seu número é o zero!\n");
}
