#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;

	if (argv[1])
	{
	while (argv[1][i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(argv[1][i]);
		i--;
	}
	ft_putchar('\n');
	}
	return (0);
}
