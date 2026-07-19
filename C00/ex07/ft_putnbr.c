/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:40:32 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/15 18:49:44 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	lt;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb <= -10)
			ft_putnbr(nb / -10);
		lt = '0' - nb % 10;
		ft_putchar(lt);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		lt = nb % 10 + '0';
		ft_putchar(lt);
	}
}
