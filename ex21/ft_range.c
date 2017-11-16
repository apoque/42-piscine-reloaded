/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:26:22 by apoque            #+#    #+#             */
/*   Updated: 2017/11/08 17:02:31 by apoque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		tab = (int *)malloc(sizeof(int) * (max - min));
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
}
