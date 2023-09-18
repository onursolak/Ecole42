/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksolak <ksolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:48:55 by ksolak            #+#    #+#             */
/*   Updated: 2023/09/17 22:47:07 by ksolak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc ((max - min) * sizeof(int));
	if (p == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
