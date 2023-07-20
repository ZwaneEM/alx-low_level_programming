#include "function_pointers.h"

/**
* int_index - searches for an interger
* @array: array to search
* @size: size of the array
* @cmp: pointer to function to use
* Return: Nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int ite;
	int count;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (ite = 0; ite <= size; ite++)
		{
			if ((*cmp)(array[ite]) == 1)
			{
				count = ite;
				break;
			}
			else if (ite == size)
			{
				return (-1);
				break;
			}
		}
	}

	return (count);
}
