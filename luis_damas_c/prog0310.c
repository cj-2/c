#include <stdio.h>
void main()
{
	float salario;

	printf("Digite seu dim dim: ");
	scanf(" %f", &salario);

	salario = salario > 1000 ? salario * 1.05 : salario * 1.07;
	printf("Seu salario com o acrecimo será %.2f reais\n", salario);
}
