/*
 * bubble.c
 *
 *  Created on: 24 de jun de 2016
 *      Author: brena
 */

#include "lista02.h"

void bubble (int *vetor, int tam)
{
	int i,troca,aux;
	do
	{
		troca=0;
		for(i=0;i<tam;i++)
			if(vetor[i]>vetor[i+1])
			{
				aux=vetor[i];
				vetor[i]=vetor[i+1];
				vetor[i+1]=aux;
				troca=1;
			}
	} while(troca);
}
