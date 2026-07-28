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

int		ft_index(char c, char *base);

int		ft_atoi_base(char *str, char *base);

int		ft_digitnum(long n, int len);

char	*ft_itos(int i, long n, int len, char *base_to);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	char	*str;
	long	n;
	int		len;

	n = ft_atoi_base(nbr, base_from);
	len = ft_base(base_to);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i += 1;
	}
	i += ft_digitnum(n, len);
	str = ft_itos(i, n, len, base_to);
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_convert_base("-10", "01234567", "0123456789ABCDEF"));
}
