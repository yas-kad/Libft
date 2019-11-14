/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:45:35 by yait-kad          #+#    #+#             */
/*   Updated: 2019/11/11 19:19:42 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ch;

	i = 0;
	ch = (unsigned char *)str;
	while (i < n)
	{
		ch[i++] = (unsigned char)c;
	}
	str = (void *)ch;
	return (str);
}
