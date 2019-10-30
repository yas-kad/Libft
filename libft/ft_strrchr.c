/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:27:43 by yait-kad          #+#    #+#             */
/*   Updated: 2019/10/30 18:44:08 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *c1, int c2)
{
	int len;

	len = ft_strlen((char *)c1);
	if ((char)c2 == '\0')
		return ((char *)c1 + len);
	while (len >= 0)
	{
		if (c1[len] == c2)
			return ((char *)c1 + len);
		len--;
	}
	return (NULL);
}
