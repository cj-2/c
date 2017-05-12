#include <stdio.h>
void main()
 {
	int n;
	for (n = 1; n <= 20; n++)
	  putchar('*');
	putchar('\n');

	printf("Numeros entre 1 e 5:\n");

	for (n = 1; n <= 20; n++)
	  putchar('*');
	putchar('\n');

	for (n = 1; n <= 5; n++)
	  printf("%d\n", n);

	for (n = 1; n < 20; n++)
	  putchar('*');
	putchar('\n');

 }
