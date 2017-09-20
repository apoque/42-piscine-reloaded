#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (res);
	else
		{
			while (nb > 0)
			{
				res = res * nb;
				nb--;
			}
			return (res);
		}
}

int main(void)
{
	printf("%d\n", ft_iterative_factorial(12));
	return (0);
}
