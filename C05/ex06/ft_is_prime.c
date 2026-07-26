/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:44:31 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/26 09:18:44 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;
	int n;

	i = 1;
	n = 0;
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		if (nb % i == 0)
			n++;
		i++;
	}
	if (n == 2)
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d", ft_is_prime(19));
}
