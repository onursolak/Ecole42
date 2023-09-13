/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksolak <ksolak@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:30:47 by ksolak            #+#    #+#             */
/*   Updated: 2023/09/10 05:48:29 by ksolak           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	*ft_minus(char *str, int *i, int *minus)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] == ' ' || str[a] == '-' || str[a] == '+' 
		|| (str[a] >= '\t' && str[a] <= '\r'))
	{
		if (str[a] == '-')
			b++;
		a++;
	}
	*i = a;
	*minus = b;
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	minus;
	int	number;

	j = 0;
	number = 0;
	ft_minus(str, &i, &minus);
	while (str[i] <= '9' && str[i] >= '0')
	{
		if (j > 0)
			number = (number * 10) + (str[i] - 48);
		else
			number = str[i] - 48;
		i++;
		j++;
	}
	if (minus % 2 == 1)
		number = (-number);
	return (number);
}

int main()
{
	char *str = "  ---++--+-321312kljhkl3123";
	printf("%d", ft_atoi(str));
}