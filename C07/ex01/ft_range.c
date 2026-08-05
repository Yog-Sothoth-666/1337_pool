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
/*
#include <stdio.h>
*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*tab;

	if (max <= min)
		return (NULL);
	i = min;
	j = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	while (i < max)
		tab[j++] = i++;
	return (tab);
}
/*
int	main()
{
	int	*tab;
	int	i = 0;
	tab = ft_range(6, 3);
	if (tab != NULL)
	{
		while (i < 3)
		{
			printf("%d", tab[i++]);
		}
	}
	free(tab);
}
*/
