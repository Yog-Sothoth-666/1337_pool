/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 13:31:35 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/20 13:57:31 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while(dest[i])
	{
		i++;
	}
	while(*src && i < n)
	{
		dest[i] = *str;
		i++;
		str++;
	}
	dest[i] = '\0';
	retuen (dest);
}
