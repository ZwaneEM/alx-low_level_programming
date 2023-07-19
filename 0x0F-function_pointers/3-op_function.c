#ifndef _3_OP_FUNCTIONS_C
#define _3_OP_FUNCTIONS_C

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
