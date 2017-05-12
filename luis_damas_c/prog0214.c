#include <stdio.h>
void main()
{
	int n;
	printf("Fala um numero ai: ");
	scanf("%d",&n);
	printf("O numero %d que digitou corresponde a letra %c na tabela ASCCI\n",n,(char) n);
	printf("O próximo caractere é o %c com o numero ASCII %d\n",(char) n++, n++);
}
