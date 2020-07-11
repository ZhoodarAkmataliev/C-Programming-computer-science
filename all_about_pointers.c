#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int*** a = (int***)malloc(sizeof(int*));
	a[0] = (int**)malloc(sizeof(int*) * 2);
	a[0][0] = (int*)malloc(sizeof(int*) * 3);
	a[0][0][0] = 5;
	a[0][0][1] = 5;
	a[0][0][2] = 5;
	printf("%d\n", a[0][0][0]);
	printf("%d\n", a[0][0][1]);
	printf("%d\n", a[0][0][2]);
	free(a[0][0]);
	free(a[0]);
	free(**a);
	a[0][0][0] = 0;
	a[0][0][1] = 0;
	a[0][0][2] = 0;

	return (0);
}
