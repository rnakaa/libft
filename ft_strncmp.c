/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:30:32 by rnaka             #+#    #+#             */
/*   Updated: 2022/09/28 11:54:32 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n-- != 0)
	{
		if (*str1 != *str2)
			return ((int)(*str1 - *str2));
		if (*str1 == 0)
			return (0);
		str1++;
		str2++;
	}
	return (0);
}

// #include <libc.h>
// int main(void)
// {
// 	char str1[10] = "aaaaaaaa";
// 	char str2[10] = "aaaaa";
	
// 	// char str3[] = "";
// 	// char str4[] = "abe";
// 	// str2[3] = 0;
// 	// int i = 0;
// 	// while (i != 20)
// 	// {
// 	// 	if ((int)(ft_strncmp(str1,str2,i)-(int)strncmp(str1,str2,i)) != 0)
// 	// 		{
// 	// printf("%d\n%d\n\n",(int)(ft_strncmp(str1,str2,100)-strncmp(str1,str2,100)),100);
// 	// 		}
// 	// 	i++;
// 	// }
// 	// printf("%d\n",ft_strncmp(str1,str2,3));
// 	// printf("%d\n",strncmp(str1,str2,3));
// 	printf("%d\n", strncmp(str1, str2, 100));
// 	printf("%d\n", ft_strncmp(str1, str2, 100));
// 	return (0);
// }
