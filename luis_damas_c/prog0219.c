#include <stdio.h>
void main()
{
	float num;
	printf("Escolha um numero flutuante: ");
	scanf(" %f", &num);
	printf("O inteiro desse numero é %d\n",(int) num);
	printf("A parte flutuante ou 'real' do numero é %f\n", num - (int) num);
}
