/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_sys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 09:24:18 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 15:50:57 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/wait.h>
#include "ft_sh2.h"
#include "libft.h"

int			commande_sys(char **line, char **av, char **env, char *split_path)
{
	pid_t	pere;

	pere = fork();
	if (pere > 0)
		waitpid(pere, 0, 0);
	if (pere == 0)
		child(line, av, env, split_path);
	*line = ft_strnew(ft_strlen(*line));
	return (1);
}
