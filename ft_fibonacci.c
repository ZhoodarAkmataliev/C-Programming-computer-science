#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	int i;
	int *array;

	i = 2;
	if (index < 0)
		return (-1);
	array = (int*)malloc(sizeof(array) * index);
	array[0] = 0;
	array[1] = 1;
	if (index == 0)
		return (0);
	else
	{
		while (i < index)
		{
			array[i] = (array[i - 1]) + (array[i - 2]);
			i++;
		}
		i--;
	}
	return (array[i]);
}

int		main(void)
{
	printf("%d\n", ft_fibonacci(-1));
	return (0);
}
