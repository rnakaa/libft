/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:40:33 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/03 22:54:09 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*src;

	src = (char *)s;
	dest = malloc((ft_strlen(src)));
	ft_strlcpy(dest,src,ft_strlen(src)+1);
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char	s[] = "hello waorld";
// 	char	*p;

// 	p = ft_strdup(s);
// 	printf("%s",p);
// 	return 0;
// }
