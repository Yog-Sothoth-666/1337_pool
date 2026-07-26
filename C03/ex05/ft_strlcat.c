/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 10:35:00 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/26 11:54:15 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	s_len = 0;
	d_len = 0;
	while (src[s_len])
		s_len++;
	while (dest[d_len] && d_len < size)
		d_len++;
	if (d_len == size)
		return (size + s_len);
	if (d_len + s_len >= size)
		return (d_len + s_len);
	if (size = 0)
		return (d_len + s_len);
	i = d_len;
	j = 0;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (d_len + s_len);
}

int main()
{
	char dest[10] = "hello";
	char *src = NULL;
	int l;
	l = ft_strlcat(dest, src, 10);
	printf("lengh is %d\n", l);
	printf("%s", dest);
}
