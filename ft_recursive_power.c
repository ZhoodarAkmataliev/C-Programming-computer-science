#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		return(nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 4));
	return (0);
}
