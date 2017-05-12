#include <stdio.h>

linha()
 {
	int i;
	for(i = 1; i <= 20; i++)
	  putchar('*');
	putchar('\n');
 }

void main()
 {
	linha();
	puts("Numeros entre 1 e 5");
	linha();

	for(int n = 1; n <= 5; n++)
	  printf("%d \n", n);

	linha();
 }
