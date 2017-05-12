#include <stdio.h>
void main()
{
	int x;
	printf("Informe um numero: ");
	scanf("%d", &x);
	if ( x >= 0)
		printf("Seu número é positivo!\n");
	else
		printf("Seu número é negativo!\n");
}
