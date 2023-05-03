#include "lists.h"

/**
 * add_nodeint_end - a node is added at the end of a singly linked list
 * @head: points to the first element in the list
 * @n: input value for in the new element
 * Return: a pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temporary = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temporary->nextnode)
		temporary = temporary->next;
	temporary->next = newnode;
	return (newnode);
}
