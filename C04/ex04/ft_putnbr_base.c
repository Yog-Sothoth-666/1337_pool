/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:31:50 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/26 11:47:45 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base(char *base)
{
	int		i;
	char	asc[256];

	i = 0;
	while (i < 256)
		asc[i++] = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (asc[(unsigned char)base[i]] == 1)
			return (0);
		else
			asc[(unsigned char)base[i]] = 1;
		i++;
	}
	if (i <= 1)
		return (0);
	else
		return (i);
}

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_putnb(long nb, int len, char *base)
{
	if (nb >= len)
		ft_putnb(nb / len, len, base);
	ft_putc(base[nb % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	len = ft_base(base);
	if (len)
	{
		if (nbr < 0)
		{
			ft_putc('-');
			nb = -nbr;
		}
		else
			nb = nbr;
		ft_putnb(nb, len, base);
	}
}
