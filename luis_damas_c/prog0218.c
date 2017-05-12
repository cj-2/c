#include <stdio.h>
void main()
{
	long int seg;
	printf("Informe uma quantidade de segundos: ");
	scanf(" %ld", &seg);
	printf("Esse número de segundos representa %ld horas %ld minutos %ld segundos\n", seg / 3600, (seg % 3600) / 60,  seg % 60);
}
