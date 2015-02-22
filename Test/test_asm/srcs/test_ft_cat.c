/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_cat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 11:22:12 by mdelage           #+#    #+#             */
/*   Updated: 2015/02/04 11:40:10 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_cat(void)
{
	int		fd;

	printf("== %s ==\n", __func__);
	fd = open(__FILE__, O_RDONLY);
	if (fd > 0)
	{
		ft_cat(fd);
		close(fd);
	}
	fd = open(".", O_RDONLY);
	if (fd > 0)
	{
		ft_cat(fd);
		close(fd);
	}
	ft_cat(-1);
	ft_cat(6);
//	ft_cat(0);
	return ;
}
