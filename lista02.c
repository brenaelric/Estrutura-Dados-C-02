/*
 * lista01.c
 *
 *  Created on: 24 de jun de 2016
 *      Author: brena
 */

#include "lista02.h"

int main()
{

	int tam, a, fim=0;
	while (!fim)
	{
		system("cls");
		printf(" _________________________________________ \n");
		printf("| IFCE - Engenharia de Telecomunicações   |\n");
		printf("| Estrutura de Dados - Prof. Ernani       |\n");
		printf("| Aluna: Brena Kesia                      |\n");
		printf("|_________________________________________|\n");

		printf("\nDigite o tamanho do vetor\n");
		scanf("%d", &tam);
		int init=0, end = (tam-1);

		int vetor[tam];
		lervetor(vetor, tam);
		printf("\n");
		imprimevetor(vetor, tam);

		printf("\nEscolha o metodo de ordenacao:\n");
		printf("1 - Bubble Sort\n");
		printf("2 - Insertion Sort\n");
		printf("3 - Selection Sort\n");
		printf("4 - QuickSort\n");
		printf("5 - SAIR\n");
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			printf("\n");
			bubble(vetor, tam);
			imprimevetor(vetor, tam);
			printf("\n");
			break;
		case 2:
			printf("\n");
			insertion(vetor, tam);
			imprimevetor(vetor, tam);
			printf("\n");
			break;
		case 3:
			printf("\n");
			selection(vetor, tam);
			imprimevetor(vetor, tam);
			printf("\n");
			break;
		case 4:
			printf("\n");
			quicksort(vetor, init, end);
			imprimevetor(vetor, tam);
			printf("\n");
			break;
		case 5:
			fim = 1;
		}
		system("pause");

	}
}
