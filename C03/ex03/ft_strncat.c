/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 13:31:35 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/25 10:19:08 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while(dest[i])
		i++;
	nb += i;
	while(*src && i < nb)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

int main()
{
	int i = 0;
	char dst[30] = "Hello";
	ft_strncat(dst, " World", 6);
	while (dst[i])
		write(1, &dst[i++], 1);
}
