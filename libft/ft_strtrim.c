/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 20:17:10 by yait-kad          #+#    #+#             */
/*   Updated: 2019/10/30 16:19:14 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isspace_end(const char *c1, const char *set2)
{
	int		j;
	int		len_c1;
	int		len_set2;
	int		compt;

	len_c1 = ft_strlen(c1);
	len_set2 = ft_strlen(set2);
	while (len_c1 > 0)
	{
		j = 0;
		compt = 0;
		while (c1[len_c1 - 1] != set2[j] && set2[j] != '\0')
		{
			compt++;
			j++;
		}
		if (compt == len_set2)
			return (len_c1 - 1);
		len_c1--;
	}
	return (-1);
}

int		isspace_start(const char *c, const char *set1)
{
	int	i;
	int	j;
	int	len_set;
	int	compt;

	len_set = ft_strlen(set1);
	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		compt = 0;
		while (c[i] != set1[j] && set1[j] != '\0')
		{
			compt++;
			j++;
		}
		if (compt == len_set)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*dest;

	start = isspace_start(s1, set);
	end = isspace_end(s1, set);
	i = 0;
	dest = NULL;
	if (!(dest = (char*)malloc(sizeof(char) * ((end - start) + 2))))
		return (NULL);
	if (start >= 0)
	{
		while (start <= end)
		{
			dest[i] = s1[start];
			i++;
			start++;
		}
		dest[i] = '\0';
	}
	else
		dest = "";
	return (dest);
}
