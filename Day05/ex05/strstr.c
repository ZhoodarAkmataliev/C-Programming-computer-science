#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int tmp;

	i = 0;
	j = 0;
	tmp = 0;
	k = ft_strlen(to_find);
	if (str[i] == '\0' || to_find[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
				tmp++;
				j++;
		}
		if (tmp == k)
			return (str + (i - k + 1));
		i++;
	}
	return (0);
}

int		main(void)
{
	char *arr1 = "Hello, World!";
	char *arr2 = "World!";
	printf("%s\n", strstr(arr1, arr2));
	printf("%s\n", ft_strstr(arr1, arr2));
	return (0);
}
