#include <stdio.h>
void main()
{
	int num = 1000;
	printf("Digite uma letra: ");
	scanf(" %d", &num);
	printf("O valor da num é igual a %d, que equivale a %c", num, (char) num);
}
