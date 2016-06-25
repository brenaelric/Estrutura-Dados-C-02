/*
 * quicksort.c
 *
 *  Created on: 24 de jun de 2016
 *      Author: brena
 */

#include  "lista02.h"

int quick(int *vetor,int init,int end)
{
	int i,j,pivo,aux;
	for(i=j=init, pivo=vetor[end]; i<=end; i++)
	{
		if(vetor[i]<pivo)
		{
			aux=vetor[i];
			vetor[i]=vetor[j];
			vetor[j]=aux;
			j++;
		}
	}

   vetor[end]=vetor[j];
   vetor[j]=pivo;
   return j;
}

void quicksort(int *vetor,int init,int end)
{
	int d;
	if(init<end)
	{
		d=quick(vetor, init, end);
		quicksort(vetor,init,d-1);
		quicksort(vetor,d+1,end);
   }
}

