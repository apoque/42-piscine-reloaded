#include <stdlib.h>

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*res;

	i = ft_strlen(src);
	res = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return(res);
}

int	main(void)
{
	char	src[9] = "cacapipi\0";
	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
}
