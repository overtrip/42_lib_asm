/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_puts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 13:48:39 by mdelage           #+#    #+#             */
/*   Updated: 2015/01/29 18:30:08 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_ft_puts_sub(char *str)
{
	int		ret;

	printf("-- string : {%s} --\n", str);
	ret = ft_puts(str);
	printf("ret = %d\n", ret);
	ret = puts(str);
	printf("ret = %d\n", ret);
}

void		test_ft_puts(void)
{
	printf("== %s ==\n", __func__);
	test_ft_puts_sub("Zaz aime les poneys.");
	test_ft_puts_sub("test");
	test_ft_puts_sub(NULL);
	return ;
}
