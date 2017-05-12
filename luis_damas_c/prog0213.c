#include <stdio.h>
void main()
{
	char ch;
	printf("Fala um caractere ai: ");
	ch = getchar();
	printf("A letra %c que digitou corresponde ao numero %d na tabela ASCCI\n",ch,(int)ch);
}
