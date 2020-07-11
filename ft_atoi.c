#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_atoi(char *str)
{
	int i = 1;
	int a;
	int b;
	char c;
	int array[] = {};
	
	while(i < 10)
	{
		array[i] = str[i] - '0';
		printf("%i\n", array[i]);
		i++; 
	}
}


int main()
{
	char str[] = "123456789hjshj";
	ft_atoi(str);
	return (0);
}
