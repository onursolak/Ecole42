/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksolak <ksolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:24:54 by ksolak            #+#    #+#             */
/*   Updated: 2023/09/02 18:44:19 by ksolak           ###   ########.tr       */
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
		if (i == 1 || i == y)
			ft_putchar('o');
		else
			ft_putchar('|');
		j = 1;
		while (j <= x - 2)
		{
			if (i == 1 || i == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		if (i == 1 || i == y)
			ft_putchar('o');
		else
			ft_putchar('|');
		i++;
		ft_putchar('\n');
	}
}
