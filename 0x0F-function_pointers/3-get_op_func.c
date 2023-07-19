#include "3-calc.h"


struct op_t
{

	char *arr[20][30];
};

/*op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
*/
int (*get_op_func(char *s))(int, int)
{
	while (op_ops
