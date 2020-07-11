#include <stdio.h>
#define SWAP(a,b) b, a

int		main(void)
{
	printf("%d  %d\n", SWAP(5, 10));
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	return (0);
}
