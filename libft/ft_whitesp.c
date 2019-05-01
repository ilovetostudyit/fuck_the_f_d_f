/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whitesp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrekke <fbrekke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:36:46 by fbrekke           #+#    #+#             */
/*   Updated: 2019/02/19 19:33:51 by fbrekke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_whitesp(char *str, size_t *i, size_t *j)
{
	while ((*(str + *i)) == ' ' || (*(str + *i)) == '\t' \
	|| (*(str + *i)) == '\n')
		(*i)++;
	while ((*(str + *j)) == ' ' || (*(str + *j)) == '\t' \
	|| (*(str + *j)) == '\n')
		(*j)--;
	if (*i || *j < ft_strlen(str))
		return (1);
	return (0);
}