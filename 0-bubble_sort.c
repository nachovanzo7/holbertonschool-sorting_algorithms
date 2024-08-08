#include <stdio.h>
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
	int aux, band;
	size_t i, y;

	for (y = 0; y < size - 1; y++)
	{
		band = 0;

		for (i = 0; i < size - 1 - y; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				band = 1;

				print_array(array, size);
			}
		}

	}

	if (!band)
		return;
}
