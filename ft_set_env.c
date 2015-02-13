/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:10:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 15:51:13 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_sh2.h"

char	**ft_set_env(char **line, char **env)
{
	int			i;
	char		*bkp;
	char		*test;
	int			r;

	if (ft_strncmp(*line, "unsetenv", 8) == 0)
		return (ft_unset_env(line, env));
	bkp = ft_strdup(*line);
	i = -1;
	test = ft_strnew(15);
	bkp += 7;
	r = ft_count_char(bkp, '=');
	test = ft_strncpy(test, bkp, r);
	while (env[++i] != NULL)
		if (ft_strncmp(test, env[i], r) == 0)
		{
			env[i] = ft_strdup(bkp);
			return (env);
		}
	env[i] = ft_strdup(bkp);
	env[i + 1] = NULL;
	return (env);
}
