/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 14:47:17 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/23 15:16:14 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *new;
	int i;

	i = 0;
	new = (char*) malloc(ft_strlen(src) + 1);
	if (!new)
		return NULL;
	while(*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

int	main()
{
	char *og = "Goodbye World!";
	char *cp;
	cp = ft_strdup(og);
	while(*cp)
		write(1, cp++, 1);
}
