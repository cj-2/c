#include <stdio.h>
void main()
{
	float salario, imposto = 0.0;
	char sexo;

	printf("Digite seu salário: ");
	scanf(" %f", &salario);

	printf("Digite o seu sexo: ");
	scanf(" %c", &sexo);

	switch (sexo){
		case 'm' :
		case 'M' : imposto = 0.15; break;
		case 'f' :
		case 'F' : imposto = 0.10; break;

		default : printf("Você é humano?\n");
	}

	printf("O imposto que deve ser pago será de %.2f, ou seja, seu salário liquido será de %.2f reais.\n", salario * imposto,salario - (salario*imposto));
}
