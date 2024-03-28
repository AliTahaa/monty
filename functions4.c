#include "monty.h"

/**
 * mul_ - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_num: Interger representing the line number of of the opcode.
 */
void mul_(stack_t **stack, unsigned int line_num)
{
	int i;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error2(8, line_num, "mul");

	(*stack) = (*stack)->next;
	i = (*stack)->n * (*stack)->prev->n;
	(*stack)->n = i;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

/**
 * mod_ - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_num: Interger representing the line number of of the opcode.
 */
void mod_(stack_t **stack, unsigned int line_num)
{
	int i;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		error2(8, line_num, "mod");

	if ((*stack)->n == 0)
		error2(9, line_num);
	(*stack) = (*stack)->next;
	i = (*stack)->n % (*stack)->prev->n;
	(*stack)->n = i;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
