#include <stdio.h>
void main(){
	int ano;
	printf("Teste se um ano é bissexto: "); scanf(" %d", &ano);

	if  ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
		printf("O ano de %d é bissexto!\n", ano);
	else
		printf("O ano de %d não é bissexto!\n", ano);
}
