#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
*insertion_sort_list - Ordena de izquierda a derecha
*Return: no retorna nada
*@list: la lista de elementos
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *nodo, *next, *prev;

	nodo = (*list)->next;

	while (nodo != NULL)
	{
		prev = nodo->prev;
		next = nodo->next;

		while (prev && nodo->n < prev->n)
		{
			prev->next = nodo->next;

			if (nodo->next)
				nodo->next->prev = prev;

			nodo->prev = prev->prev;
			nodo->next = prev;

			if (prev->prev)
				prev->prev->next = nodo;

			prev->prev = nodo;

			prev = nodo->prev;

			if (nodo->prev == NULL)
				*list = nodo;

			print_list(*list);
		}

		nodo = next;
	}
}
