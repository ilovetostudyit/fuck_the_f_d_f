/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pars.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:09:26 by fbrekke           #+#    #+#             */
/*   Updated: 2019/05/01 04:37:12 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_pars(char **str, const char *delim, char **wrd)
{
	char	ret;
	char	a;
	int 	i;

	i = 0;
	ret = '~';
	if (*str == '\0')
		return (-1);
	while (*str != '\0' && (a = ft_fuck(delim, **str)) != -1)
	{
		*str += 1;
		// printf("a = [%c]\n", a);
		ret = a < ret ? a : ret;
	}
	if (*str == '\0')
		return (-1);
	while (*str != '\0' && ft_fuck(delim, **str) == -1 && ++*str)
		i++;
	*str = *str - i;
	*wrd = ft_strsub(*str, 0, i);
	*str += i;
	return (ret);
}
