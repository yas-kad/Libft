/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 21:23:20 by yait-kad          #+#    #+#             */
/*   Updated: 2019/11/10 14:36:30 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*temp;

	if (*lst)
	{
		while (*lst)
		{
			temp = *lst;
			del((*lst)->content);
			free(temp);
			*lst = (*lst)->next;
		}
	}
}
