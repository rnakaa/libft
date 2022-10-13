/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:09:58 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/12 20:30:49 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char	**save = 0;
	char	*ss;
	char	s[] = "abc";
	char	s2[] = "123";

	save = malloc(sizeof(char*) * (10 + 1));
	save[0] = s;
	save[1] = s2;
	save[2] = 0;

	int i = 0;

	while (save[i])
	{
		printf("str %s\n", save[i++]);

	}
}