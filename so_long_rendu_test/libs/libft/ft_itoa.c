/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:01:42 by alprival          #+#    #+#             */
/*   Updated: 2022/04/14 14:01:44 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_populate(char *tab, int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		tab[0] = '-';
		i++;
	}
	while (n > 0)
	{
		tab[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

static int	ft_len(int n)
{
	int	neg;
	int	i;

	neg = 0;
	i = 1;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n *= -1;
		neg++;
	}
	while ((unsigned int)n > 0)
	{
		n /= 10;
		i++;
	}
	return (i + neg);
}

static char	*ft_echange(char *tab, int n)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(tab) - 1;
	if (n < 0)
		i++;
	while (i < j)
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		j--;
		i++;
	}
	return (tab);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		len;

	len = ft_len(n);
	tab = ft_calloc(sizeof(char), len);
	if (!tab)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(tab, "-2147483648", 12);
		return (tab);
	}
	if (!tab)
		return (NULL);
	ft_populate(tab, n);
	ft_echange(tab, n);
	if (tab[0] == 0)
		tab[0] = '0';
	return (tab);
}
