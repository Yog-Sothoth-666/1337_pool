/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stroin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <ykhaldou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 11:17:14 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/08/03 11:57:35 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include <stdlib.h>

int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	f_size(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += slen(strs[i++]);
		if (i != size)
			len += slen(sep);
	}
	return (len);
}

int	ft_append(char *dst, char *src, int index)
{
	int	i;

	i = 0;
	while (src[i])
		dst[index++] = src[i++];
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		k;
	int		len;

	len = f_size(strs, sep, size);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		k = ft_append(str, strs[i++], k);
		if (i < size)
			k = ft_append(str, sep, k);
	}
	str[k] = '\0';
	return (str);
}
/*
int main()
{
	char	*strs[] = {"cooked", "you", "are"};
	char	*sep = ", ";
	char	*str;
	str = ft_strjoin(3, strs, sep);
	printf("%s", str);
	free(str);
}
*/
