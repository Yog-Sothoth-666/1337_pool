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
	printf("%s", ft_convert_base("20", "01234567", "0123456789"));
}
*/
