/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 15:08:12 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/26 15:16:40 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*tab;

	if (max == min)
		return (NULL);
	i = min;
	j = 0;
	tab = malloc(sizeof(int) * (max - min));
	while (i < max)
		tab[j++] = i++;
	return (tab);
}
