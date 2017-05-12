#include <stdio.h>
void main()
{
	char item;
	do
	  {
		puts("M E N U:");

		puts("Fornecedores: F");
		puts("Encomendas: E");
		puts("Clientes: C");
		puts("Sair: S");

		printf("Escolha: ");
		item = getchar();
		fflush (stdin);

		switch(item)
		  {
			case 'f':
			case 'F': puts("\nOpção Fornecedores\n"); break;
			case 'e':
			case 'E': puts("\nOpção Encomendas\n"); break;
			case 'c':
			case 'C': puts("\nOpção Clientes\n"); break;
			case 's':
			case 'S': break;

			default : puts("\nOpção Inválida!\n");
	  	  }
		getchar();
	  }
	while (item != 's' && item != 'S');
}
