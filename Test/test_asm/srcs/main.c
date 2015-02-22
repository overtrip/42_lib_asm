/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 21:04:55 by mdelage           #+#    #+#             */
/*   Updated: 2015/02/04 11:21:55 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		main(void)
{
	test_ft_bzero();
	test_ft_isstuff(&ft_isalpha, &isalpha);
	test_ft_isstuff(&ft_isdigit, &isdigit);
	test_ft_isstuff(&ft_isalnum, &isalnum);
	test_ft_isstuff(&ft_isascii, &isascii);
	test_ft_isstuff(&ft_isprint, &isprint);
	test_ft_tostuff(&ft_toupper, &toupper);
	test_ft_tostuff(&ft_tolower, &tolower);
	test_ft_puts();
	test_ft_strlen();
	test_ft_strcat();
	test_ft_memset();
	test_ft_memcpy();
	test_ft_strdup();
	test_ft_cat();
	return (0);
}
