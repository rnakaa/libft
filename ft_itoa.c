/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:04:10 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/10 22:50:21 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"
static size_t	def_digit(int n)
{
	size_t	digit;

	digit = 0;
	while (n / 10 != 0)
	{
		digit++;
		n = n/10;
	}
	digit++;
	return(digit);
}
static size_t	ft_mult(size_t digit)
{
	size_t	ing;

	ing = 1;
	while (digit--)
		ing *= 10;
	return(ing);
}
char *ft_itoa(int n)
{
	char	*restr;
	size_t	s;
	size_t	flag;
	size_t	digit;

	flag = 0;
	if (n < 0)
	{
		flag = 1;
		n *= -1;
	}

	if (n == -2147483648)
		return (ft_strdup("-2147483648")); 
	
	digit = def_digit(n);
	if (flag)
		restr = malloc(digit + 2);
	
	else
		restr = malloc(digit + 1);
	digit--;
	if (restr == NULL)
		return (NULL);
	digit = ft_mult(digit);
	s = 0;
	if (flag)
	{
		restr[s] = '-';
		s++;
	}
	while (digit/10 != 0)
	{
		printf("m:%d\n",n);
		restr[s++] = n / digit +48;
		n = n%digit;
		digit = digit/10;
	}
	restr[s++] = n + 48;
	restr[s] = '\0';	
	return (restr);
}
// int main()
// {
// 	int m = -2147483648;
// 	printf("m:%s",ft_itoa(m));
// 	return 0;
// }