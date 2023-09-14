/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksolak <ksolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 05:21:19 by ksolak            #+#    #+#             */
/*   Updated: 2023/09/13 02:51:10 by ksolak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	isprime;
	int	i;

	isprime = 1;
	i = 2;
	while (1)
	{
		while (i <= (nb / 2))
		{
			if (nb % i == 0)
				isprime = 0;
			i++;
		}
		i = 2;
		if (isprime)
			break ;
		isprime = 1;
		nb++;
	}
	return (nb);
}
