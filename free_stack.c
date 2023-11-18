#include "monty.h"

/**
  * frees_stack - To release all elements in the stack
  *
  * Return: Nothing
  */
void frees_stack(void)
{
	stack_t *temp = NULL;

	if (head)
	{
		for (temp = head; temp; temp = head)
		{
			head = head->next;
			free(temp);
		}
	}
}

