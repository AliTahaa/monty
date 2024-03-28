#include "monty.h"

/**
 * error2 - handles errors.
 * @err_code: The error codes are the following:
 * 6 > When the stack it empty for pint.
 * 7 > When the stack it empty for pop.
 * 8 > When stack is too short for operation.
 * 9 > Division by zero.
 */
void error2(int err_code, ...)
{
	va_list arg;
	char *oper;
	int linee_num;

	va_start(arg, err_code);
	switch (err_code)
	{
	case 6:
		fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(arg, int));
		break;
	case 7:
		fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(arg, int));
		break;
	case 8:
		linee_num = va_arg(arg, unsigned int);
		oper = va_arg(arg, char *);
		fprintf(stderr, "L%d: can't %s, stack too short\n", linee_num, oper);
		break;
	case 9:
		fprintf(stderr, "L%d: division by zero\n",
				va_arg(arg, unsigned int));
		break;
	default:
		break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}
