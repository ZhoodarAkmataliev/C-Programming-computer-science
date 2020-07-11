#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char arr[] = "Hello, World!";
	printf("%s\n", arr);
	printf("%s\n", ft_strupcase(arr));
	return (0);
}
