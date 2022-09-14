/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 03:01:11 by rnaka             #+#    #+#             */
/*   Updated: 2022/09/14 14:25:44 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	const char	*a;

// 	a = src;
// 	if (dstsize)
// 		dstsize--;
// 	while (dstsize-- && *a)
// 		*dst++ = *a++;
// 	*dst = '\0';
// 	return ((sizeof a) / (sizeof a[0]));
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	dst[100];
// 	char	src[] = "42Tokyo";

// 	printf("%zu\n", strlcpy(dst, src, 0));
// 	printf("%s\n", dst);
// 	printf("%zu\n", ft_strlcpy(dst, src, 0));
// 	printf("%s\n", dst);
// }
