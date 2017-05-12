#include <stdio.h>
void main()
{
	int x;
	printf("Qual seu salario? ");
	scanf("%d", &x);
	if ( x < 100000){
		x = x + 1000;
		printf("Você merece um aumento, agora receberá: %d\n",x);
	}
	else
		printf("Ja ganha de mais, continuara com: %d\n", x);
}
