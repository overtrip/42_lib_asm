/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 19:21:04 by mdelage           #+#    #+#             */
/*   Updated: 2015/02/03 19:32:06 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_ft_memcpy_sub(char *s1, char *s2, char *s3, size_t len)
{
	printf("[%s] {%s} -> ", s1, s3);
	ft_memcpy(s1, s3, len);
	printf("[%s]\n", s1);
	printf("[%s] {%s} -> ", s2, s3);
	ft_memcpy(s2, s3, len);
	printf("[%s]\n", s2);
}

void	test_ft_memcpy()
{
	char	s1[20] = "cacaquipue";
	char	s2[20] = "cacaquipue";

	printf("== %s ==\n", __func__);
	test_ft_memcpy_sub(s1, s2, "abcdefghijklmnopqrs", 20);
	test_ft_memcpy_sub(s1, s2, "                   ", 20);
	test_ft_memcpy_sub(s1, s2, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 20);
	return ;
}
