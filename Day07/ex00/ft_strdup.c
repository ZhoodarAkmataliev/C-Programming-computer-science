#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int count;
	int i;
	char *p;

	count = 0;
	while (src[count] != '\0')
		count++;
	p = (char*)malloc(sizeof(src) * count + 1);
	if (p != NULL)
	{
		i = 0;
		while (src[i] != '\0')
		{
			p[i] = src[i];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	else
		return (NULL);
}

int		main(void)
{
	char arr[] = "Hello, World!";
	printf("%s\n", ft_strdup(arr));
	return (0);
}

