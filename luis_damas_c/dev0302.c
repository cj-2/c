#include <stdio.h>
void main(){
	int x;
	printf("Informe um número: "); scanf(" %d", &x);

	switch (x){
		case 0 : printf("O numero é igual a zero!\n"); break;
		default  : printf("O numero não é igual a zero!\n");
	}
}
