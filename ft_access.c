/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_access.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 14:42:13 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 13:13:44 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_access(char **line, char *path)
{
	char	*test;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (**line == '\0')
		return (0);
	test = ft_strnew(ft_strlen(*line));
	while (line[0][j] != ' ' && line[0][j] != '\0')
		test[i++] = line[0][j++];
	path = ft_strjoin(path, "/");
	path = ft_strjoin(path, test);
	if (access(path, F_OK) == 0)
		return (1);
	if (line[0][0] == '.' && line[0][1] == '/')
		return (1);
	return (0);
}
