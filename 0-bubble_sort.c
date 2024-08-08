ç#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
*bubble_sort - Ordena de izquierda a derecha
*Return: no retorna nada
*@array: la lista de elementos
*@size: longitud de la lista
*/

void bubble_sort(int *array, size_t size)
{
	int x, aux;
	size_t i;

	x = 0;


	while (x == 0)
	{
		x = 1;

		for (i = 0; i <= size - 1; i++)
		{
			printf("%i", array[i]);
			if (i != (size - 1))
				printf(", ");


			if (array[i] > array[i + 1])
			{
				x = 0;
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
			}
		}

		printf("\n");
	}
}
