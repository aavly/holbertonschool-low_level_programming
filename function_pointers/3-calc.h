/**
 * struct op - struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char * op;
	int (*f)(int a, int b);
} op_t;

/**
 * get_op_func - obtains operation
 * @s: operation
 * 
 * Return: result of operation.
 */
int (*get_op_func(char *s))(int, int);  
