/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 09:20:13 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/26 09:33:59 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_is_prime(int nb)
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

int ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb++)));
	return (--nb);
}

int main()
{
	printf("%d", ft_find_next_prime(20));
}
