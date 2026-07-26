/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 13:18:07 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/25 13:31:27 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	else if (nb <= 0)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}

int main()
{
	printf("%d", ft_recursive_factorial(4));
}
