#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct 	list {  //struct linked list
	char *data;
	struct list *next;
};

struct list* addWord(struct list* ptr, char *word) //add words to linked list
{
	if (ptr == NULL)
	{
		ptr = (struct list*)malloc(sizeof(struct list*));
		ptr->data = strdup(word);
		ptr->next = NULL;
	} else
		ptr->next = addWord(ptr->next, word);
	return ptr;
}

void	printList(struct list *p) //recursive print list
{
	if (p != NULL)
	{
		printf("%s\n", p->data);
		printList(p->next);
	}
}

void	printRevList(struct list *p) //print reverse list
{
	if (p != NULL)
	{
		printRevList(p->next);
		printf("%s\n", p->data);
	}
}

int		main(void)
{
	struct list* root = NULL;
	root = addWord(root, "zero"); // just add elements
	root = addWord(root, "one");
	root = addWord(root, "two");
	root = addWord(root, "three");
	root = addWord(root, "four");
	root = addWord(root, "five");
	root = addWord(root, "six");
	root = addWord(root, "seven");
	root = addWord(root, "eight");
	root = addWord(root, "nine");
	printf("<><><><><><><><><><>\n");
	printList(root);                   // print added elements
	printf("<><><><><><><><><><>\n");
	printRevList(root);                 // print added elements reverse
	printf("<><><><><><><><><><>\n");
	return 0;
}
