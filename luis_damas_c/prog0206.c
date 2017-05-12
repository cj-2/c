#include <stdio.h>
void main()
{
	short int idade;
	int montante;
	long int n_conta;

	printf("Informe sua idade: ");
	scanf("%hd",&idade);

	printf("Qual o montante para depositar: ");
	scanf("%d",&montante);

	printf("Qual o número da conta? ");
	scanf("%ld",&n_conta);

	printf("Uma pessoa de %hd anos depositou o montante de %d na conta de número %ld.\n",idade,montante,n_conta);
}
