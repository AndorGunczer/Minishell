/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:39:49 by ysonmez           #+#    #+#             */
/*   Updated: 2021/12/24 17:41:56 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	ft_pwd(t_list	*lst)
{
	t_env	*tmp;

	tmp = lst->env;
	while (tmp != NULL && ft_strcmp(tmp->var, "PWD"))
	{
		tmp = tmp->next;
	}
	if (tmp != NULL)
		printf("%s\n", tmp->value);
}
