/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:49:48 by rnaka             #+#    #+#             */
/*   Updated: 2022/08/01 22:12:19 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;

	if (0 >= size - ft_strlen(dst) - 1)
		return (ft_strlen(dst));
	a = size - ft_strlen(dst) - 1;
	b = ft_strlen(dst);
	c = 0;
	while (0 < a)
	{
		dst[b] = src[c];
		b++;
		a--;
		c++;
	}
	b--;
	dst[b] = '\0';
	return (size + a);
}
