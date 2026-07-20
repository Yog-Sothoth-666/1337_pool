/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 09:32:07 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/20 10:36:17 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(char c)
{
	int	div;
	int	mod;
	char	*hex;

	hex = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, "\\", 1);
	write(1, &hex[div], 1);
	write(1, &hex[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] < 20 || str[i] > 126)
			ft_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("hala\n\t\t\t\nthere   ??");
}
