/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:38:13 by rnaka             #+#    #+#             */
/*   Updated: 2022/09/15 00:14:11 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	size_t		a;
	char		*buff1;
	const char	*buff2;
	
	if (!buf1 && !buf2)
		return (NULL);
	buff1 = buf1;
	buff2 = buf2;
	a = 0;
	if (buff1 == buff2)
		return (buff1);
	if (buff1 < buff2)
	{
		while (a < n)
		{
			buff1[a] = buff2[a];
			a++;
		}
	}
	if (buff1 > buff2)
	{
		while (a < n)
		{
			n--;
			buff1[n] = buff2[n];
		}
		buff1[n] = buff2[n];
	}
	return (buff1);
}

// #include <string.h>

// int main(void)
// {
// 	char	*p1;
// 	char	str1[] = "42Tokyo";
// 	char	*p2;
// 	char	str2[] = "42Tokyo";

// 	p1 = &str1;
// 	p2 = &str2;

// 	printf("%s\n", memmove((void *)(p2 + 2), str2, 5));
// 	printf("%s\n", ft_memmove((void *)(p1 + 2), str1, 5));
// 	// printf("%s\n", memmove((void *)(p2 - 2), str2, 5));
// 	// printf("%s\n", ft_memmove((void *)(p1 - 2), str1, 5));
// 	return (0);
// }
