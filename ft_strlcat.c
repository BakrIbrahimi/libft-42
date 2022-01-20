/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:37:03 by bibrahim          #+#    #+#             */
/*   Updated: 2021/11/23 15:31:43 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	d;
	size_t	s;
	size_t	rd;

	d = ft_strlen(dst);
	rd = d;
	s = ft_strlen(src);
	if (d >= size || !size)
		return (size + s);
	while (*src && d < size - 1)
	{
		dst[d] = *src;
		d++;
		src++;
	}
	dst[d] = '\0';
	return (rd + s);
}
