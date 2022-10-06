/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:15:07 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/06 17:50:24 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr (char const *s, unsigned int start, size_t len)
{
	char	*ch;
	char	*re;
	int		i;

	i = 0;
	ch = (char *)s;
	if (s == 0)
		return (NULL);
	if (ft_strlen(ch) < (size_t)start)
		return (ft_strdup(""));
	if (ft_strlen(s) - (size_t)start < len)
		re = malloc(ft_strlen(s) - (size_t)start);
	else
		re = malloc(len);
	if (re == 0)
		return (NULL);
	while (len != 0 && ch[i] != '\0')
	{
		re[i] = ch[start + i];
		i++;
		len--;
	}
	re[i] = '\0';
	return (re);
}