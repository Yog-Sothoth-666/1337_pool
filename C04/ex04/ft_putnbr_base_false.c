/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 10:34:35 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/25 10:29:46 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base(char *base)
{
	char	ascii[256];
	int		i;

	i = 0;
	while (ascii[i])
		ascii[i++] = 0;
	i = -1;
	while (base[++i])
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		else if (ascii[(unsigned char) base[i]] == 1)
			return (0);
		else
			ascii[(unsigned char) base[i]] = 1;
	}
	if (i < 1)
		return (0);
	return (i);
}

void	put_buffer(char *buff, int len)
{
	while (len >= 0)
		write(1, &buff[len--], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;
	char	buff[20];
	int		i;

	n = nbr;
	i = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (!(ft_base(base)))
		return ;
	len = ft_base(base);
	if (n == 0)
		buff[i++] = base[0];
	if (n > 0)
	{
		buff[i++] = base[n % len];
		n /= len;
	}
	put_buffer(buff, i - 1);
}

int main()
{
	ft_putnbr_base(64, "01");
}
