/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:02:58 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/06 19:50:42 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*chap;

	chap = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (chap == NULL)
		return (NULL);
	return (chap);
}
// ""  NULL '\0' 0
// 		""
// 		char str1[] = "456"; //[1][2][3][\0]
// 		char str2[] = "123"; //[1][2][3][\0]
// 		char *str = ""; //[\0][]
// 		NULL
// 		char *str = NULL; //
// 		char str = malloc //[][][][]
// 		'\0'
// 		char c = '\0' //'\0'