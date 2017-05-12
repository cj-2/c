#include <stdio.h>
void main()
{
	float n1, n2, resul;
	char c;

	printf("Digite  uma conta de inteiros: ");
	scanf(" %f %c %f", &n1, &c, &n2);

	switch (c){
		case '+' : resul = n1+n2; break;
		case '-' : resul = n1-n2; break;
		case 'x' : resul = n1*n2; break;
		case ':' : resul = n1 /  n2;
	}

	printf("O resultado de %.0f %c %.0f = %.2f\n", n1, c, n2, resul);
}
