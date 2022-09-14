/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:09:21 by rnaka             #+#    #+#             */
/*   Updated: 2022/09/14 23:56:26 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	const char	*buff2;
	char		*buff1;

	if (!buf1 && !buf2)
		return (NULL);
	buff1 = buf1;
	buff2 = buf2;
	while (n--)
		buff1[n] = buff2[n];
	return (buf1);
}
