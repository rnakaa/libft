/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:40:33 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/08 16:55:07 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*src;
	char	*save;

	src = (char *)s;
	dest = malloc(ft_strlen(src)+1);
	save = dest;
	while (*src)
		*save++ = *src++;
	*save = 0;
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char	s[] = "hello world";
// 	char	*p;
// 	p = ft_strdup(s);
// 	printf("%s",ft_strdup(s));
// 	return 0;
// }
//strlcpyは渡したサイズ-1分文字をコピーし、NULL留めする