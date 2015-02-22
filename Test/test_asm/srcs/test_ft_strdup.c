/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 10:46:26 by mdelage           #+#    #+#             */
/*   Updated: 2015/02/04 11:04:37 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_ft_strdup_sub(char *str, char *s1, char *s2)
{
	s1 = ft_strdup(str);
	s2 = strdup(str);
	printf("[%s] -> [%s] ([%s])\n", str, s1, s2);
	free(s1);
	free(s2);
	s1 = NULL;
	s2 = NULL;
}

void	test_ft_strdup(void)
{
	char	str[30] = {"Zaz aime les poneys."};
	char	*s1 = NULL;
	char	*s2 = NULL;

	printf("== %s ==\n", __func__);
	test_ft_strdup_sub(str, s1, s2);
	strcpy(str, "toto");
	test_ft_strdup_sub(str, s1, s2);
	strcpy(str, "");
	test_ft_strdup_sub(str, s1, s2);
	return ;
}
