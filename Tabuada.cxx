#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 1;
	int valor, calculo;
	int opcao = 0;
	for (x = 1; x = 1;)
	{
		system("clear");

		printf("\t ## BEM VINDO ##\n");
		printf("\t1 - Somar\n");
		printf("\t2 - Dividir\n");
		printf("\t3 - Diminuir\n");
		printf("\t4 - Multiplicar\n");
		printf("\t5 - Sair\n\n");
		printf("Digite o Numero: ");
		scanf("%d", &opcao);

		if (opcao == 1)
		{
			printf("Digite o Numero(1 a 9): ");
			scanf("%d", &valor);
			printf("Somando Numero: %d\n", valor);
			for (calculo = 1; calculo <= 10; calculo++)
			{
				printf("%d + %d = %d\n", valor, calculo, valor + calculo);
			}
			system("pause");
		}
		if (opcao == 2)
		{
			printf("Digite um Numero(1 a 9): ");
			scanf("%d", &valor);
			printf("Dividindo Numero: %d\n", valor);
			for (calculo = 1; calculo <= 10; calculo++)
			{
				int numerador = valor * calculo;
				printf("%d / %d = %d\n", numerador, valor, numerador / valor);
			}
			system("pause");
		}
		if (opcao == 3)
		{
			printf("Digite um Numero(1 a 9): ");
			scanf("%d", &valor);
			printf("Diminuindo Numero: %d\n", valor);
			for (calculo = 1; calculo <= 10; calculo++)
			{
				int numerado = valor + calculo;
				printf("%d - %d = %d\n", numerado, valor, numerado - valor);
			}
			system("pause");
		}
		if (opcao == 4)
		{
			printf("Digite um Numero(1 a 9): ");
			scanf("%d", &valor);
			printf("Multiplicando Numero: %d\n", valor);
			for (calculo = 1; calculo <= 10; calculo++)
			{
				printf("%d x %d = %d\n", valor, calculo, valor * calculo);
			}
			system("pause");
		}
		if(opcao==5)
		{
			printf("Saindo do Programa\n");
			printf("\tDesenvolvido por: Rafael Mendes");
			return 0;
		}
	}
	return 0;
}