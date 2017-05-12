#include <stdio.h>
void main()
{
	int n, i, i2, b;

	printf("Introduza um numero: "); scanf(" %d", &n);

	b = n;

	for(i = 1; i < 10; i++)
	  {

		if (n == b)
	  	printf("%02d\n", n);

		else
	  	  {
			for(i2 = 1; i2 <= 10; i2++, n++)
			  {

				if(n%10 == 0)
				  break;

				else
				  {
					if (n%3 == 0)
				  	  continue;

			 		else
				  	  printf("%02d\n",n);
				  }
			  }

			if(n%10 == 0)
			  break;
		  }

		n++;

	  }
}
