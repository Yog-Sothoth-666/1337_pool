/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 15:17:51 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/26 16:03:45 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	else
	{
		*range = malloc (sizeof(int) * (max - min));
		if (!*range)
			return (-1);
		j = 0;
		i = min;
		while (i < max)
			*(*range + j++) = i++;
		return (j);
	}
}
