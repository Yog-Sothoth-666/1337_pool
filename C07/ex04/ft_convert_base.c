/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <ykhaldou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 13:59:46 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/08/03 14:53:23 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>
*/
int	ft_base(char *base)
{
	char	asc[256];
	int		i;

	i = 0;
	while (i < 256)
		asc[i++] = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		else if (asc[(unsigned char)base[i]] == 1)
			return (0);
		else
			asc[(unsigned char)base[i]] = 1;
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int		n;
	long	nb;
	int		s;
	int		len;

	nb = 0;
	s = 1;
	len = ft_base(base);
	while (*nbr == ' ' || (*nbr >= '\t' && *nbr <= '\r'))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			s *= -1;
		nbr++;
	}
	while (base_index(*nbr, base) != -1)
	{
		nb *= len;
		nb += base_index(*nbr++, base);
	}
	n = nb * s;
	return (n);
}

int	str_size(long n, int len)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= len;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int n, char *base)
{
	int		len;
	int		i;
	char	*nbr;
	long	nb;

	len = ft_base(base);
	nb = n;
	i = str_size(nb, len);
	nbr = malloc(i + 1);
	if (!nbr)
		return (NULL);
	if (nb == 0)
		nbr[0] = base[0];
	nbr[i--] = '\0';
	if (nb < 0)
		nb *= -1;
	while (nb)
	{
		nbr[i--] = base[nb % len];
		nb /= len;
	}
	if (n < 0)
		nbr[0] = '-';
	return (nbr);
}
