#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	tmp;
	int	res;

	i = 0;
	tmp = 0;
	if (nb <= 0)
		return (0);
	else 
		while (i * i <= nb)
		{
			if (tmp + i * 2 + 1 == nb)
				return (i + 1);
			tmp = tmp + i * 2 + 1;
			i++;
		}
	return  (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(2025000000));
	return (0);
}
