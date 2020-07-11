#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_comb_comb(int *number, int count, int n)
{
	int i;
	while (count)
	{
		while (number[count] == (9 + count - (n - 1)) && count >= 0)
			count--;
		if (count < 0)
			break ;
		number[count]++;
		i = count;
		while (i < n)
		{
			number[i + 1] = number[i] + 1;
			i++;
		}
		count = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		i = 0;
		while (i < n)
			ft_putchar(number[i++] + '0');
	}
}
void ft_print_combn(int n)
{
	int number[n];
	int i;
	int count;

	count = n - 1;
	if (n > 10)
		return;
	i = -1;
	while (i++ < n)
		number[i] = i;
		i = 0;
	while (i < n)
		ft_putchar(number[i++] + '0');
	ft_comb_comb(number, count, n);
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_combn(0);
	return (0);
}
