/*
 * insertion.c
 *
 *  Created on: 24 de jun de 2016
 *      Author: brena
 */

#include "lista02.h"

void insertion (int *vetor, int tam)
{
	int i,j,aux;
	for(i=1; i<tam; i++)
	{
		aux = vetor[i];
		j = i-1;
		while(j>=0 && aux < vetor[j])
		{
			vetor[j+1] = vetor[j];
			j--;
		}
		vetor[j+1] = aux;
	}
}
