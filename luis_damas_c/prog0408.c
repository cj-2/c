#include <stdio.h>
void main()
{
	int tabuada, num;

	for(tabuada = 1; tabuada <= 5; tabuada++)
	{
		for(num = 1; num <= 10; num++)
			printf("%02d x %02d = %02d \n", num, tabuada, num * tabuada);

			if(tabuada != 5)
			{
				printf("Digite Enter para continuar!"); getchar();
			}
	}
}
