/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 12:01:32 by mdelage           #+#    #+#             */
/*   Updated: 2015/02/03 16:37:15 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void		test_ft_strlen_sub(char *str)
{
	printf("[%s] -> %lu (%lu)\n", str, ft_strlen(str), strlen(str));
	return ;
}

void			test_ft_strlen(void)
{
	printf("== %s ==\n", __func__);
	test_ft_strlen_sub("Zaz aime les poneys.");
	test_ft_strlen_sub("toto");
	test_ft_strlen_sub("");
	return ;
}
