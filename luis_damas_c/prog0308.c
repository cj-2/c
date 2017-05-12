#include <stdio.h>
void main()
{
	int a, b;
	printf("Introduza dois numeros: ");
	scanf(" %d %d", &a, &b);

	if(a >= 0){
		if(b > 10)
		printf("B é muito grande!\n");
	}

	else
	printf("A tem um valor negativo.\n");

	printf("Numeros adicionados %d %d.\n", a, b);
}
