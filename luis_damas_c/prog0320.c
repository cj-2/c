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
		case 'm' : resul = horas * 10;
		case 's' : resul = horas * 60;
		case 'd' : resul = horas * 60;
	}

	printf("A quantidade de horas em %c é %ld\n",o_q, resul);
}
