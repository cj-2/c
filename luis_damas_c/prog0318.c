#include <stdio.h>
void main()
{
	int horas;
	long resul;
	char o_q;
	printf("Digite a quantidade de horas que deseja converter: ");
	scanf(" %d", &horas);
	printf("No que deseja converter m/s/d? "); scanf(" %c", &o_q);

	switch(o_q){
		case 'm' : resul = horas * 60; break;
		case 's' : resul = horas * 3600; break;
		case 'd' : resul = horas * 36000;
	}

	printf("A quantidade de horas em %c é %ld\n",o_q, resul);
}
