/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_space.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 10:40:29 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 15:52:17 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh2.h"
#include "libft.h"

char		*test_space(char **line)
{
	int		i;
	char	*ret;
	int		j;

	j = 0;
	ret = ft_strnew(ft_strlen(*line));
	i = 0;
	while (line[0][i] != '\0')
	{
		while (line[0][i] != ' ' && line[0][i] != '\0' && line[0][i] != '\t')
			ret[j++] = line[0][i++];
		if (line[0][i] == ' ' && line[0][i - 1] != ' ' && j > 0)
			ret[j++] = line[0][i++];
		else if (line[0][i] == '\t' && line[0][i - 1] != '\t' && j > 0)
		{
			ret[j++] = ' ';
			i++;
		}
		else
			i++;
	}
	return (ret);
}
