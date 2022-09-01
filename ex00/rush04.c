/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:56:52 by snaggara          #+#    #+#             */
/*   Updated: 2022/08/14 14:00:30 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_row(long long nb);

void	last_row(long long nb);

void	middle_row(long long nb);

void	first_row(long long nb)
{
	ft_putchar('A');
	if (nb > 1)
	{
		while (nb-- > 2)
		{
			ft_putchar('B');
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	last_row(long long nb)
{
	ft_putchar('C');
	if (nb > 1)
	{
		while (nb-- > 2)
		{
			ft_putchar('B');
		}
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middle_row(long long nb)
{
	ft_putchar('B');
	if (nb > 1)
	{
		while (nb-- > 2)
		{
			ft_putchar(' ');
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(long long x, long long y)
{
	if (y <= 0 || x <= 0)
		return ;
	first_row(x);
	if (y-- == 1)
		return ;
	while (y-- > 1)
	{
		middle_row(x);
	}
	last_row(x);
}
