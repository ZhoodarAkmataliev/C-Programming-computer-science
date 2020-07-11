#include <stdio.h>
#include <stdlib.h>

void	print()
{
	printf("I'm printed");
}

int		main(int argc, char** argv)
{
	void	(*p) (void);
	p = print;
	p();
	return (0);
}
