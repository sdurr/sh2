/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:01:40 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 15:52:09 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include "ft_sh2.h"
#include <stdlib.h>

int		ft_sh2(char **av, char **env)
{
	char	*line;
	int		ret;
	int		test;

	ret = 1;
	ft_putstr(user(env));
	line = ft_strnew(15);
	while (ret == 1)
	{
		free(line);
		ret = get_next_line(0, &line);
		test = test_commande(&line, av, env);
		if (test == -1)
			return (0);
		ft_putstr(user(env));
	}
	return (0);
}
