#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: array to print
* @size: size of the array
* @action: the function to execute
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int leng = size;

	for (i = 0; i < leng; i++)
	{
		(*action)(array[i]);
	}
}
