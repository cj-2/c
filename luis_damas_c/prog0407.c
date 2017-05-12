#include <stdio.h>
void main()
{
	int user_n, n, soma, produto;

	printf("Digite um número: "); scanf(" %d",&user_n);

	for(n = 1, soma = 0, produto = 1; n <= user_n; n++)
	{
		soma = n + soma;
		produto = n * produto;
	}
	printf("Soma: %d\n", soma);
	printf("Produto: %d\n", produto);
}
