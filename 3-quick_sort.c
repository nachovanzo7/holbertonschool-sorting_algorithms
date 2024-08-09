#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * lomuto_div - Particion de array
 * Return: elemento + 1
 * @array: la lista de elementos
 * @min: elemento pequenio
 * @top: ultimo elemento
**/
size_t lomuto_div(int *array, size_t min, size_t top)
{
	int elem;
	size_t i;
	int aux;

	elem = array[top];
	i = min - 1;

	for (size_t y = min; y < top; y++)
	{
		if (array[y] < elem)
		{
			i++;

			aux = array[i];
			array[i] = array[y];
			array[y] = aux;
		}
	}

	aux = array[top];
	array[top] = array[i + 1];
	array[i + 1] = aux;

	return (i + 1);
}

/**
 * lomuto - Intercambia los elementos basandose en el top
 * Return: no retorna nada
 * @array: la lisa de los elementos
 * @min: elemento pequenio
 * @top: ultimo elemento
 * @size: tamanio del array
**/

void lomuto(int* array, size_t min, size_t top) {
    if (min < top) {
        size_t elem_index = lomuto_div(array, min, top);
	print_array(array, top + 1);
        lomuto(array, min, elem_index - 1);
        lomuto(array, elem_index + 1, top);
    }
}



/**
*quick_sort - Ordena comparando a con b
*Return: no retorna nada
*@array: la lista de elementos
*@size: longitud de la lista
*/
void quick_sort(int *array, size_t size)
{
	lomuto(array, 0, size - 1);
}
