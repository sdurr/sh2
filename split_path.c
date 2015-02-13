/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_commande.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 10:04:54 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 15:51:20 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh2.h"
#include "libft.h"
#include <stdlib.h>

char		**split_path(char **env)
{
	char	*test;
	char	**split;
	int		i;
	int		j;

	test = ft_getenv(env);
	i = ft_count_char(test, ':');
	split = (char **)malloc(sizeof(char *) * i + 1);
	i = 0;
	while (*test != '\0')
	{
		j = 0;
		split[i] = ft_strdup(test);
		while (split[i][j] != ':' && split[i][j] != '\0')
			j++;
		split[i][j] = '\0';
		i++;
		while (*test != ':' && *test != '\0')
			test++;
		if (*test != '\0')
			test++;
	}
	split[i + 1] = NULL;
	return (split);
}
