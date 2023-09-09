/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksolak <ksolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:31:00 by ksolak            #+#    #+#             */
/*   Updated: 2023/09/08 04:52:20 by ksolak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i1;

	i = 0;
	i1 = -1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (((i >= 1) && (str[i] <= 122 && str[i] >= 97) 
				&& ((str[i1] >= 32 && str[i1] <= 47) 
					|| (str[i1] >= 58 && str[i1] <= 64)
					|| (str[i1] >= 91 && str[i1] <= 96) 
					|| (str[i1] >= 123))) 
			|| ((i == 0) && (str[i] <= 122 && str[i] >= 97)))
		{
			str[i] -= 32;
		}
		i++;
		i1++;
	}
	return (str);
}
