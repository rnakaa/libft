/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:56:08 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/08 17:22:42 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*save;
	size_t	size;

	size = ft_strlen(s1);
	save = (char *)s1;
	while(size != 0 || *save != '\0')
	{
		save = ft_strnstr(save, set, ft_strlen(set));
		if(save != 0)
		{
			
			save += ft_strlen(set) - 1;
		}
		save++;
		size--;
	}
}