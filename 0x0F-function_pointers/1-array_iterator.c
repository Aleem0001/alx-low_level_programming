#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array to be targeted*@size: size of array
 * @size: is the size
 * @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
