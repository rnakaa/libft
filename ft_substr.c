/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:15:07 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/06 21:52:04 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr (char const *s, unsigned int start, size_t len)
{
	char	*re;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < (size_t)start)
		return (ft_strdup(""));
	if (ft_strlen(s) - (size_t)start < len)
		re = malloc(ft_strlen(s) - (size_t)start);
	else
		re = malloc(len);
	if (re == 0)
		return (NULL);
	while (len != 0 && s[i] != '\0')
	{
		re[i] = s[start + i];
		i++;
		len--;
	}
	re[i] = '\0';
	return (re);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_substr("12334", 40, 40));
// 	return (0);
// }