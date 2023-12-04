#include "main.h"

void main(void)
{

	char *p = getenv("PATH");
	char *token = strtok(p, ":");
	/*dir *head */

	/*head = NULL;*/
	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
		/*add_node(&head, token);*/
	}

	/*printf("now, printing the single list\n");
	print_list(head);*/


}


size_t print_list(const dir *h)
{
size_t count = 0;

while (h != 0)
{
count++;
if (h->directory == 0)
{
printf("[0] (nil)\n");
}
else
{
printf("%s\n", h->directory);
}
h = h->next;
}
return (count);
}



dir *add_node(dir **head, const char *str)
{
	char *x;
	dir *p = malloc(sizeof(dir *));

	if (p == 0)
		return (*head);

	x = strdup(str);
	p->directory = x;
	p->next = *head;

	*head = p;
	return (*head);
}
