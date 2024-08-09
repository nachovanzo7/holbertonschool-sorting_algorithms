#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - selection sort
 * Return: void
 * @array: array
 * @size: size
**/
void selection_sort(int *array, size_t size)
{
	size_t i, y, min;
	int aux;

	for (i = 0; i < size - 1; i++) /* Recorrer array */
	{
		min = i;

		for (y = i + 1; y < size; y++) /* Incrementando posicion */
		{
			if (array[y] < array[min]) /*En caso de que el siguiente a i */
			{			   /* sea mayor, se intercambia */
				min = y;
			}
		}

		if (min != i) /* Se encuentra un valor menor en la lista */
		{
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
			print_array(array, size);
		}
	}
}

