#include <stdio.h>
void main()
{
	float salario, taxa;
	printf("Digite seu salario: ");
	scanf(" %f", &salario);

	if (salario < 1000)
		taxa = .05;

	else
	{
		if(salario >= 1000 && salario < 5000)
			taxa = .11;

		if(salario >= 5000)
			taxa = .35;
	}
	printf("Salario: %.2f\nTaxa de Imposto: %.2f\nLiquido: %.2f\n", salario, salario * taxa, salario * (1.0 - taxa));
}
