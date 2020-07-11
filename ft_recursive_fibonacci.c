#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int index)
{
	if (index < 0 || index > 46)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int		main(void)
{
	printf("%d\n", ft_fibonacci(45));
	return (0);
}
