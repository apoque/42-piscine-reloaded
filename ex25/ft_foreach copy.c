#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

void	ft_test(int a)
{
	a = a + 1;
	printf("%d\n", a);
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};

	ft_foreach(tab, 5, &ft_test);
	return(0);
}
