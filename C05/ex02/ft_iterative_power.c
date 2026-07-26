/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:02:25 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/25 14:10:32 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int n;

	i = 1;
	n = nb;
	if (power < 0)
		return(0);
	if (nb == 0 && power == 0)
		return (0);
	while (i < power)
	{
		nb *= n;
		i++;
	}
	return (nb);
}

int main()
{
	printf("%d", ft_iterative_power(2, 3));
}
