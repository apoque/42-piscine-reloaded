#include <stdlib.h>

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return(NULL);
	else
		{
		tab = (int *)malloc(sizeof(int) * (max - min));
		while (i < max - min)
			{
				tab[i] = min + i;
				printf("%d\n", tab[i]);
				i++;
			}
		return (tab);
		}
}

int	main(void)
{
	ft_range(-10, 10);
	return (0);
}
