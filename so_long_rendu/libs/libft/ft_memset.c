/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:15:36 by alprival          #+#    #+#             */
/*   Updated: 2022/03/31 12:46:36 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*temp;

	temp = s;
	i = 0;
	while (n-- != 0)
		temp[i++] = c;
	return (s);
}
