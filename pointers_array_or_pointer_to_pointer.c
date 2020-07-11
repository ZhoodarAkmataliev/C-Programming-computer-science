#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char** argv)
{
	int** a = (int**)malloc(sizeof(int*) * 3);
	int j = 99;
	int k = 66;
	int l = 88;
	a[0] = &j;
	a[1] = &k;
	a[2] = &l;
	printf("%d\n", *a[0]);
	printf("%d\n", *a[1]);
	printf("%d\n", *a[2]);
	return 0;
}
