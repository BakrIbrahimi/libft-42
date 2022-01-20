/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:39:25 by bibrahim          #+#    #+#             */
/*   Updated: 2021/11/18 13:35:07 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (NULL);
	i = -1;
	if (src > dest)
	{
		while (len > ++i)
			d[i] = s[i];
	}
	else
	{
		while (len)
		{
			d[len - 1] = s[len -1];
			len--;
		}
	}
	return (dest);
}
