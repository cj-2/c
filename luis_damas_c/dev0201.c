#include <stdio.h>
void main()
{
	int dia, mes, ano;
	printf("Informe para o cadastro: \n");
	printf("Dia da sua aquisição: ");
	scanf(" %d", &dia);
	printf("Mês do mesmo: ");
	scanf(" %d", &mes);
	printf("E por fim o ano: ");
	scanf(" %d", &ano);
	printf("A data informada foi %d/%d/%d.\n", dia, mes, ano);
}
