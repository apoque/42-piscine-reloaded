int	ft_recursive_factorial(int nb)
{
	int	res;
	int	tmp;

	res = 1;
	tmp = nb - 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return(nb * ft_recursive_factorial(tmp));
}
