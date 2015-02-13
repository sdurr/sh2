/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 09:10:19 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 15:51:32 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_sh2.h"

char	**ft_unset_env(char **line, char **env)
{
	int			i;
	char		*bkp;
	char		*test;
	int			r;
	int			ret;

	bkp = ft_strdup(*line);
	i = -1;
	test = ft_strnew(15);
	bkp += 9;
	r = ft_strlen(bkp);
	test = ft_strncpy(test, bkp, r);
	while (env[++i] != NULL)
		if (ft_strncmp(test, env[i], r) == 0)
			while (env[i] != NULL)
			{
				ret = i;
				ret++;
				env[i++] = env[ret];
			}
	env[i + 1] = NULL;
	return (env);
}
