/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksolak <ksolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:43:54 by ksolak            #+#    #+#             */
/*   Updated: 2023/09/03 20:44:05 by ksolak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y, int i, int j)
{
	if (x < 1 || y < 1)
		return ;
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) 
				|| (i == y && j == x)
				|| (i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('o');
			else if ((i == 1 || i == y) && (j != 1 && j != x))
				ft_putchar('-');
			else if ((i != 1 || i != y) && (j == 1 && j == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
