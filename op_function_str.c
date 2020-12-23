#include "monty.h"
/**
 * f_pchar - f_pchar
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL)
	{
		ERR_pchar(line_number);
		return;
	}
	if (ptr->n < 0 || ptr->n > 127)
	{
		ERR_pchar_range(line_number);
		return;
	}
	printf("%c\n", ptr->n);
}
/**
 * f_pstr - f_pstr
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	
	(void)line_number;
	ptr = *stack;

	while (ptr && ptr->n)
	{
		if (ptr->n < 0 || ptr->n > 127)
			break;
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	putchar('\n');
}

