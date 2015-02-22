/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 15:46:03 by mdelage           #+#    #+#             */
/*   Updated: 2015/01/29 13:53:30 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void		test_ft_bzero(void)
{
	int		nb;
	char	*str;

	printf("== %s ==\n", __func__);
	nb = 42;
	str = strdup("abcdefghijklmnopqrstuvwxyz");
	printf("nb = %d -> ", nb);
	ft_bzero((void *)&nb, 4);
	printf("%d\n", nb);
	printf("[%s] -> [", str);
	ft_bzero(str, 26);
	write(1, str, 26);
	printf("]\n");
	free(str);
	return ;
}
