#include "monty.h"
/**
 * f_pstr - to prints the string starting at the top of the stack,
 * followed by a new
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	for (; h && (h->n > 0 && h->n <= 127); h = h->next)
	{
		printf("%c", h->n);
	}
	printf("\n");
}
