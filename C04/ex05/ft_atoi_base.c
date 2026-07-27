/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:34:23 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/27 14:06:26 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_isbase(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	s;
	int len;

	n = 0;
	s = 1;
	len = ft_base(base);
	if (len)
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r' ))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				s *= -1;
			str++;
		}
		while (*str &&  ft_isbase(*str, base) != -1)
		{
			n *= len;
			n += ft_isbase(*str++, base);
		}
		return (n * s);
	}
	return (0);
}

/*
int main()
{
	printf("%d", ft_atoi_base("   +--++-+--3DB+i", "0123456789ABCDEF"));
}
*/
