/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tremblin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 13:20:24 by tremblin          #+#    #+#             */
/*   Updated: 2015/02/13 12:54:43 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_cd(char **line)
{
	char *ch;
	char *error;

	if (ft_strncmp(*line, "cd", 2) == 0)
		error = ft_strdup("cd: no such file or directory: ");
	else
		error = ft_strdup("ft_minishell1: no such file or directory: ");
	ch = ft_strnew(ft_strlen(*line));
	if (**line != '/')
	{
		ch = ft_strchr(*line, ' ');
		ch++;
	}
	if (**line == '/')
		ch = ft_strdup(*line);
	chdir("~");
	if (chdir(ch) == -1)
	{
		ft_putstr_fd(error, 2);
		ft_putstr_fd(ch, 2);
		ft_putstr("\n");
	}
	return (1);
}
