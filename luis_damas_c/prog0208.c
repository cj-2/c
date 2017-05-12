#include <stdio.h>
void main()
{
	float quilos = 1.0E3;
	double gramas = 1.0e6;
	float n_toneladas;

	printf("Quantas toneladas comprou? ");
	scanf("%f", &n_toneladas);
	printf("O Número equivale a %f quilos = %E\n", quilos * n_toneladas, quilos * n_toneladas);
	printf("Que também equivale a %f gramas = %e\n", gramas * n_toneladas, gramas * n_toneladas);

}
