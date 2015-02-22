/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 13:52:33 by mdelage           #+#    #+#             */
/*   Updated: 2015/02/04 11:14:35 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

void	ft_bzero(char *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_puts(const char *str);
size_t	ft_strlen(char *str);
char	*ft_strcat(char *s1, char const *s2);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, void *src, size_t len);
char	*ft_strdup(char const *str);
void	ft_cat(int fd);

#endif
