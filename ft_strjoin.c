/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:22:17 by bibrahim          #+#    #+#             */
/*   Updated: 2021/11/18 13:42:13 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int		i;
	int		a;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	a = ft_strlen(s2);
	ptr = (char *)malloc((i + a) * sizeof (char) + 1);
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, i);
	ft_memmove(ptr + i, s2, a + 1);
	ptr[i + a] = 0;
	return (ptr);
}
