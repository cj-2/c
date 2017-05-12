#include <stdio.h>
void main()
{
	int x, y, copo;
	printf("Digite dois numeros: ");
	scanf(" %d %d",&x,&y);
	if (x > y)
	{
	copo = x;
	x = y;
	y = copo;
	}
	printf("Em ordem crescente: %d %d\n", x, y);
}
