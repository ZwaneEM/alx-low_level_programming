#include <stdio.h>

struct op_t = {
	{"+", 1}, 
 	{"-", 2},
	{"*", 3}, 
	{"/", 4},
	{"%", 5}, 
 	{NULL, NULL}
 };  
 int i;

int main(void)
{
	struct op_t ops[1];

	printf("%d", ops[1].op_t);

	return (0);
}
