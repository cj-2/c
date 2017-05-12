#include <stdio.h>
void main()
{
	int n;

	for(n = 0; n <= 255; n++)
	  {
		printf("%03d EQUIVALE A %c\n", n, (char) n);
	  }
}
