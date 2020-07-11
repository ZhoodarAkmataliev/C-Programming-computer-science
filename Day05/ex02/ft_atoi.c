#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int tmp;
	int ngt;

	i = 0;
	tmp = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
	if (str[i] == '+')
	{
		if (str[i + 1] < '0' || str[i + 1] > '9')
			return (0);
		else
			i++;
	}
	if (str[i] == '-')
	{
		ngt = 1;
		i++;
	}
	while (str[i] > '0' && str[i] < '9')
	{
		tmp = tmp * 10 + str[i] - '0';
		i++;
	}
	if (ngt == 1)
		tmp = tmp * -1;
	return (tmp);
}

int		main(void)
{
	char *arr = " 	213214";
	printf("%d\n", atoi(arr));
	printf("%d\n", ft_atoi(arr));
	return (0);
}
