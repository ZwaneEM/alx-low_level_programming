#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{

	int leng;
	int b, i;
	char *temp;
	char c;
	
	leng = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		leng = leng + 1;
	}

	temp = (char*)malloc(sizeof(c) * leng);

	for (b = 0; b < leng; b++)
	{
		*(temp + b) = *(str + b);
	}

	return (temp);
}
