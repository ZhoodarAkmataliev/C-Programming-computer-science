#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	printf("%d", system(*++argv));
	return (0);
}
