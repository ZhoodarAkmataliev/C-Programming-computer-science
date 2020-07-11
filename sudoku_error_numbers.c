#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_error()
{
	int i;
	char *err = "Error";

	i = 9;
	while (err[i] != '\0')
	{
		ft_putchar(err[i]);
	}
}

int error(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (argv[i][j] != '\0')
			{
				if (argv[i][j] < '1' || argv[i][j] > '9' || argv[i][j] != '.')
				print_error();
				return (1);
				j++;
			}
			i++;
	}
	if (i != 10 && j != 10)
		{
			print_error();
			return (1);
		}
}

int main(int argc, char **argv)
{
	error(argc, argv);
	return (0);
}















