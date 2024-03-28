#include "monty.h"

/**
 * error3 - handles errors.
 * @err_code: The error codes are the following:
 * 10 > The number inside a node is outside ASCII bounds.
 * 11 > The stack is empty.
 */
void error3(int err_code, ...)
{
	va_list arg;
	int linee_num;

	va_start(arg, err_code);
	linee_num = va_arg(arg, int);
	switch (err_code)
	{
	case 10:
		fprintf(stderr, "L%d: can't pchar, value out of range\n", linee_num);
		break;
	case 11:
		fprintf(stderr, "L%d: can't pchar, stack empty\n", linee_num);
		break;
	default:
		break;
	}
	free_nodes();
	exit(EXIT_FAILURE);
}
