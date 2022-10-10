/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:56:08 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/10 19:28:21 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(j != ft_strlen(set))
	{
		if (s1[i] == set[j++])
		{
			j = 0;
			i++;
		}
	}
	j = 0;
	s1 += i;
	if(ft_strlen(s1) == 0)
		return (ft_calloc(1,1));
	i = ft_strlen(s1);
	while(j < ft_strlen(set) && i > 1)
	{
		if (s1[i - 1] == set[j++])
		{
			j = 0;
			i--;
		}
	}
	newstr = ft_calloc(1,i+1);
	if (!newstr)
		return (NULL);
	ft_memmove(newstr,s1,i);
	newstr[i] = '\0';
	return (newstr);
}

// #include <stdio.h>
// int main()
// {
// 	char ss[]= "aadfgfghjklaaaa";
// 	char ff[]= "aaa";
// 	printf("%s",ft_strtrim(ss,ff));
// 	return (0);
// }