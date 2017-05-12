#include <stdio.h>
void main()
{
	float salario;
	printf("Digite seu salario: ");
	scanf(" %f", &salario);

	if (salario <= 0)
	{
		printf("Olá Sr. Desempregado!");
	}

	else
	{
		if(salario > 999)
		printf("A quantidade de imposto que pagara é de 10%, ou seja: %.2f\n", salario * 0.10);

		else
		printf("A quantidade de imposto que pagara é de 5%, ou seja: %2.f\n",salario * 0.05);
	}
}
