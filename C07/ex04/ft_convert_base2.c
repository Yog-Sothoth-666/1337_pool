/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:03:31 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/27 17:00:37 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base(char *base)
{
	char	ascii[256];
	int		i;

	i = 0;
	while (i < 256)
		ascii[i++] = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (ascii[(unsigned char)base[i]] == 1)
			return (0);
		else
			ascii[(unsigned char)base[i]] = 1;
		i++;
	}
	return (i);
}

int	ft_index(char c, char *base)
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

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	s;
	int	len;

	n = 0;
	s = 1;
	len = ft_base(base);
	if (len)
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				s *= -1;
			str++;
		}
		while (*str >= base[0] && *str <= base[len - 1])
		{
			n *= len;
			n += ft_index(*str++, base);
		}
	}
	return (n * s);
}

int	ft_digitnum(int n, int len)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= len;
		i++;
	}
	return (i);
}

char	*ft_itos(int i, long n, int len, char *base_to)
{
	char	*str;

	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	while (n)
	{
		str[i--] = base_to[n % len];
		n /= len;
	}
	if (i == 0)
		str[i] = '-';
	return (str);
}
