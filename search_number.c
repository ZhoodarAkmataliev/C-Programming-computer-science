#include <stdio.h>

int		search(int x, int* v, int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
			printf("hight: %d\n", (high = mid - 1));
		else if (x > v[mid])
			printf("low: %d\n", (low = mid + 1));
		else
			return(mid);
	}
	return(-1);
}

int		main()
{
	int arr[100];
	int i;

	i = 0;
	while (i++ < 100)
		arr[i] = i;
	printf("%d\n", search(37, arr, 100));
	return (0);
}
