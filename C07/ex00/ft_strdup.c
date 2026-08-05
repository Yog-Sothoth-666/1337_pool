/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 14:54:17 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/26 15:07:34 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*new;

	len = 0;
	while (src[len])
		len++;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!(new))
		return (NULL);
	len = 0;
	while (*src)
		new[len++] = *src++;
	return (new);
}
