#ifndef THIS2_FILE
#define THIS2_FILE
/**
 * struct op - is a structure that contains type of an operation
 *	and its associated function
 * @op: is a pointer to the type of operation (+ or - or / or * or %)
 * @f: is a function that is associated with the operation type
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
