/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:39:43 by ysonmez           #+#    #+#             */
/*   Updated: 2021/12/24 16:45:14 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

/*	Add a new environment variable to the environment linked list
*		This new var is represented by a node with variable name and value
*/

void	ft_export(t_list	*lst)
{
	t_env	*tmp;
	t_env	*new;

	tmp = lst->env;
	if (lst->cmd[1] == NULL)
		return ;
	if (ft_strchr(lst->cmd[1], '=') == NULL)
		return ;
	else
	{
		new = new_node();
		if (new == NULL)
			return ;
		get_var_value(lst->cmd[1], new);
		addto_lst(&lst->env, new);/*fix by passing the address of lst to this function from the parent function*/
	}
}
