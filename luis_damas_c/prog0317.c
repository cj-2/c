#include <stdio.h>
void main()
{
	int horas;
	long n_sec;
	printf("Digite a quantidade de horas que deseja converter: ");
	scanf(" %d", &horas);

	n_sec = horas <= 0 ? 0 : horas * 3600L;
	printf("A quantidade de segundos equivalente é %ld segundos.\n", n_sec);
}
