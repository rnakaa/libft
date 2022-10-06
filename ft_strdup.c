/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:40:33 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/06 21:22:30 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*src;

	src = (char *)s;
	dest = malloc((ft_strlen(src)+1));
	ft_strlcpy(dest, src, ft_strlen(src));
	*(dest + strlen(src)) = '\0';
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
// int main(void)
// {
// 	printf("%s\n", ft_strdup("safdasf"));
// 	return (0);
// }