#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void* destination, int c, size_t n)
{
	char* ptr;
	int i;

	ptr = (char*)destination;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
}

int		main(void)
{
	char* str = malloc(100);
	ft_memset(str, 75, 99);
	printf("%s\n", str);
	return 0;
}
