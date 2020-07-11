#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int count;
	int i;
	int j;
	char *p;

	count = 0;
	while (argv[count + 1])
		count++;
	i = 0;
	while (i < count)
	{
		j = 1;
		while (argv[j + 1])
		{
			if (argv[j][0] > argv[j + 1][0])
			{
				p = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = p;
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (argv[j])
		ft_putstr(argv[j++]);
	return (0);
}
