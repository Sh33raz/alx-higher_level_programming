#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list
 * Return: 1 if  cycle, 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *s = list, *f = list;

	if (!list)
		return (0);
	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (1);
	}
	return (0);
}
