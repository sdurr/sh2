/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 09:58:44 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/13 15:51:55 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH2_H
# define FT_SH2_H

int			main(int ac, char **av, char **env);
int			ft_sh2(char **av, char **env);
int			ft_cd(char **line);
int			commande_sys(char **line, char **av, char **env, char *split_path);
int			commande_not_found(char **line);
int			commande_unsys(char **line, char **env);
int			test_commande(char **line, char **av, char **env);
int			child(char **line, char **av, char **env, char *path);
int			ft_access(char **line, char *path);

char		**ft_set_env(char **line, char **env);
char		**split_path(char **env);
char		**ft_unset_env(char **line, char **env);
char		**ft_av(char **line, int i);

void		ft_ls(char **line, char **env, char **av);
void		ft_cat(char **line, char **env, char **av);

char		*ft_getenv(char **env);
char		*user(char **env);
char		*test_space(char **line);
#endif
