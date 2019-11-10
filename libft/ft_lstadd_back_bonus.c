/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:55:08 by yait-kad          #+#    #+#             */
/*   Updated: 2019/11/10 14:32:43 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *l;

	l = *alst;
	if (l)
	{
		while (l->next)
			l = l->next;
		l->next = new;
		new->next = NULL;
	}
	else
		*alst = new;
}
