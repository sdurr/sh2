/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_not_found.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 10:29:39 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 11:12:14 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			commande_not_found(char **line)
{
	if (**line != '\0')
	{
		ft_putstr_fd("command not found: ", 2);
		ft_putstr_fd(*line, 2);
		ft_putchar ('\n');
	}
	*line = ft_strnew(ft_strlen(*line));
	return (1);
}
