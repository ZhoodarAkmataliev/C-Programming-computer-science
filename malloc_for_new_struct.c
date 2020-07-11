#include <stdio.h>
#include <stdlib.h>

struct 	keys_and_words
{
	int number;
	char *word;
};

int		main(void)
{
	struct keys_and_words arr;
	struct keys_and_words* ptr;
	ptr = &arr;
	struct keys_and_words **p_arr = (struct keys_and_words**)malloc(sizeof(struct keys_and_words) * 5);
	p_arr[0] = (struct keys_and_words*)malloc(sizeof(struct keys_and_words*));
	p_arr[0] = ptr;
	p_arr[0]->word = "Hello, World!";
	p_arr[0]->number = 10;
	printf("%s\n", p_arr[0]->word);
	printf("%d\n", p_arr[0]->number);
	return (0);
}
