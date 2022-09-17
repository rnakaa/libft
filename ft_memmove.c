/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:38:13 by rnaka             #+#    #+#             */
/*   Updated: 2022/09/17 17:53:07 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	size_t		a;
	char		*buff1;
	const char	*buff2 = buf2;

	if (buf1 == buf2 || n == 0)
		return (buf1);
	buff1 = buf1;
	a = 0;
	if (buff1 < buff2)
	{
		while (a < n)
		{
			buff1[a] = buff2[a];
			a++;
		}
	}
	else if (buff1 > buff2)
		while (a < n--)
			buff1[n] = buff2[n];
	return (buff1);
}
