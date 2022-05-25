include "lists.h"

/**
 * _strlen - calculate the length of a string
 * @st: the string to calculate the string length
 *
 * Return: the string length
 */
size_t _strlen(const char *st)
{
	const char *ps = st;

	if (st)
	{
		while (*ps)
			++ps;
	}
	return (ps - st);
}

/**
 * _strdup - create a new array containing a copy of the given string
 * @st: a pointer to the string to copy
 *
 * Return: If st is NULL or if memory allocation fails, return NULL.
 * else return a pointer to the new copy
 */
char *_strdup(const char *st)
{
	char *dup = NULL;
	size_t size = 0;

	if (!st)
		return (NULL);

	while (st[size++])
		;

	dup = malloc(sizeof(char) * size);
	if (!dup)
		return (NULL);

	while (size--)
		dup[size] = st[size];

	return (dup);
}

/**
 * add_node - putting a string at the beginning of the list
 * @head: a pointer to the address of the first list node
 * @st: the string to add to the list
 *
 * Return: If memory allocation fails, return NULL. Otherwise, return the
 * address of the new no
 */
list_t *add_node(list_t **head, const char *st)
{
	list_t *new = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = _strdup(st);
	new->len = (_strlen(new->str));
	new->next = *head;

	*head = new;

	return (new);
}
