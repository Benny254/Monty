#include "monty.h"
/**
 * f_pall -To print the stack
 * @head: the stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
	return;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
	}
}
