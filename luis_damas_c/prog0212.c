#include <stdio.h>
void main()
{
	char ch1, ch2;
	printf("Insira um caractere: ");
	scanf(" %c", &ch1);
	printf("Insira outro caractere: ");
	scanf(" %c", &ch2);
	printf("Os caracteres introduzidos fora '%c' e '%c'\n", ch1, ch2);
}
