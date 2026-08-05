/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <ykhaldou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 14:20:34 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/08/03 14:51:52 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>
*/
int		ft_base(char *base);

int		base_index(char c, char *base);

int		ft_atoi_base(char *nbr, char *base);

int		str_size(int n, int len);

char	*ft_itoa_base(int n, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*nb;

	if (!ft_base(base_from) || !ft_base(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	nb = ft_itoa_base(n, base_to);
	return (nb);
}
/*
int	main()
{
	// Standard conversions
	printf("%s\n", ft_convert_base("101010", "01", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base("vp", "poneyvif", "0123456789"));
	printf("%s\n", ft_convert_base("0", "0123456789", "01"));
	printf("%s\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("%s\n", ft_convert_base("-2147483648", "0123456789", "0123456789"));
}
*/
