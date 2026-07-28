/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:03:37 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/27 17:01:10 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_base(char *base);

int	ft_index(char c, char *base);

int	ft_atoi_base(char *str, char *base);

int	ft_digitnum(int n, int len);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	char	*str;
	int		len;
	int		n;

	i = 0;
	n = ft_atoi_base(nbr, base_from);
	len = ft_base(base_to);
	if (len)
	{
		i = ft_digitnum(n, len);
		str = malloc(i + 1);
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
	return (NULL);
}

int	main(void)
{
	printf("%s\n", ft_convert_base("-10", "01234567", "0123456789ABCDEF"));
}
