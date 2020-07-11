#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char *arr1 = "Hello, Wo";
	char *arr2;
	printf("%s\n", strcpy(arr2, arr1));
	printf("%s\n", ft_strcpy(arr2, arr1));
	return (0);
}
