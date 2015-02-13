/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_av.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 10:11:08 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 11:07:59 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_av(char **line, int i)
{
	char	**av;
	char	*save;
	int		j;

	save = ft_strdup(*line);
	if (ft_strchr(*line, ' ') != NULL)
		i = ft_count_char(*line, ' ');
	else
		i = ft_strlen(*line);
	av = (char **)malloc(sizeof(char *) * i + 1);
	i = 0;
	while (*save != '\0')
	{
		j = 0;
		av[i] = ft_strdup(save);
		while (av[i][j] != ' ' && av[i][j] != '\0')
			j++;
		av[i++][j] = '\0';
		while (*save != ' ' && *save != '\0')
			save++;
		if (*save != '\0')
			save++;
	}
	av[i + 1] = NULL;
	return (av);
}
