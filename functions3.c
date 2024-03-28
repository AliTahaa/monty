#include "monty.h"

/**
 * add_ - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_num: Interger representing the line number of of the opcode.
 */
void add_(stack_t **stack, unsigned int line_num)
{
	int i;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error2(8, line_num, "add");

	(*stack) = (*stack)->next;
	i = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = i;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

/**
 * sub_ - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_num: Interger representing the line number of of the opcode.
 */
void sub_(stack_t **stack, unsigned int line_num)
{
	int i;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		error2(8, line_num, "sub");

	(*stack) = (*stack)->next;
	i = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = i;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

/**
 * div_ - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_num: Interger representing the line number of of the opcode.
 */
void div_(stack_t **stack, unsigned int line_num)
{
	int i;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error2(8, line_num, "div");

	if ((*stack)->n == 0)
		error2(9, line_num);
	(*stack) = (*stack)->next;
	i = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = i;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
