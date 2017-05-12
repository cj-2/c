#include <stdio.h>
void main()
{
	int n1, n2;
	printf("Digite um numero: ");
	scanf(" %d", &n1);
	printf("Digite outro: ");
	scanf(" %d", &n2);
	printf("A soma dos dois numeros é %d\n",n1 + n2);
	printf("A subtração dos dois numeros é %d\n",n1 - n2);
	printf("A multiplicação dos dois numeros é %d\n",n1 * n2);
	printf("A divisão  dos dois numeros é %d\n",n1 / n2);
	printf("O modulo dos dois numeros é %d\n",n1 % n2);
}
