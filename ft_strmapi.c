/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:31:25 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/19 21:32:07 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const*s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ret;
	char	*save;

	len = 0;
	i = 0;
	len = ft_strlen(s);
	if (len == 0)
		return (malloc(0));
	ret = malloc(len);
	if (ret == NULL)
		return (ret);
	save = ret;
	while (i < len)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}

// char	touppera(unsigned int i, char c)
// {
// 	if ('a' <= c && c <= 'z')
// 	{
// 		c = ft_toupper(c);
// 		c += i;
// 	}
// 	return (c);
// }
// # include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_strmapi("aaaaaaaaaaaaAA", touppera));
// 	return (0);
// }