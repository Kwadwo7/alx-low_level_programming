#include "lists.h"

/**
 * add_nodeint - a node is added at the beginning of the linked list
 * @head: points to the first node in the list
 * @n: input value into the node
 * Return: a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
