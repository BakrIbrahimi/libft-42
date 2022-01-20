/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:59:44 by bibrahim          #+#    #+#             */
/*   Updated: 2021/11/25 12:26:27 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i++;
	while (--i)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	if (s[0] == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
