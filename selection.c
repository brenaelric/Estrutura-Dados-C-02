/*
 * selection.c
 *
 *  Created on: 24 de jun de 2016
 *      Author: brena
 */

#include "lista02.h"

void selection(int *vetor, int tam)
{
	int i, j, aux;
	for (i=0; i <tam-1; i++)
	{
		for(j=i+1; j<tam; j++)
			if(vetor[i]>vetor[j])
			{
				aux = vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = aux;
			}
	}
}
