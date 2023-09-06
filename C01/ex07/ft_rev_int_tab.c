/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksolak <ksolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 04:42:56 by ksolak            #+#    #+#             */
/*   Updated: 2023/09/05 06:39:37 by ksolak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap1;
	int	swap2;

	i = 0;
	while (i < size / 2)
	{
		swap1 = tab[size - 1 - i];
		swap2 = tab[i];
		tab[size - 1 - i] = swap2;
		tab[i] = swap1;
		i++;
	}
}
