#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int range;
	int i;
	int *arr;

	if (max <= min)
		return (NULL);
	range = max - min;
	range--;
	arr = (int*)malloc(sizeof(arr) * range);
	i = 0;
	while (i < range)
	{
		min++;
		arr[i] = min;
		printf("%d\n", arr[i]);
		i++;
	}
}

int		main(void)
{
	ft_range(-10, 10);
	return (0);
}
