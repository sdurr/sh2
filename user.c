/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 14:53:00 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 15:00:42 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*user(char **env)
{
	int		i;
	char	*ret;

	i = 0;
	while (env[i] != NULL && ft_strncmp(env[i], "USER=", 5) != 0)
		i++;
	if (env[i] != NULL)
	{
		ret = ft_strdup(env[i]);
		ret += 5;
		ret = ft_strjoin(ret, " $> ");
		return (ret);
	}
	return ("$> ");
}
