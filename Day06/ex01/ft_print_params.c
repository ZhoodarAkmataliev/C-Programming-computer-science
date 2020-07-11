#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	return (0);
}
