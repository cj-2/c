#include <stdio.h>
void main()
{
	int n = 1, num = 1;

	printf("Taboadas de 1 a 5!\n");

	while(num <= 5)
	{
		printf("\nTaboado do %02d: \n",num);
		while(n <= 10)
		{
			printf("%02d x %02d = %02d\n",num,n,num*n);
			n++;
		}
		n = 1;
		num++;
	}
}
