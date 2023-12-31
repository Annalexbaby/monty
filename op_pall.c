#include "monty.h"

/**
 * op_pall - prints all values on the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 * Return: void
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
