#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i] + '0');
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int temp;
	char *arr;
	int i;
	int count;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}

	
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (nb * -1);
	}
		i = 0;
		count = 0;
		temp = nb;
		while (nb > 9)
		{
			nb = nb / 10;
			count++;
		}
		arr = (char*)malloc(sizeof(arr) * count + 1);
		arr[i] = nb;
		i++;
		arr[count + 1] = '\0';
		while (count > 0)
		{
			arr[count] = temp % 10;
			temp = temp / 10;
			count--;
		}
	
	ft_putstr(arr);
	ft_putchar('\n');
	free(arr);

}

int		main(void)
{
	ft_putnbr(-2147483646);
	return (0);
}
