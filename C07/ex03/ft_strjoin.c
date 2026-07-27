/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 16:04:54 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/27 11:50:20 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_size(int size, char **strs,char *sep)
{
	int		str_l;
	int		i;

	i = 0;
	str_l = 0;
	while (i < size)
	{
		str_l += ft_strlen(strs[i++]);
		if (i < size - 1)
			str_l += ft_strlen(sep);
	}
	return (str_l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		str_l;
	int		sep_l;

	i = 0;
	sep_l = ft_strlen(sep);
	str_l = ft_size (size, strs, sep);
	str = malloc(str_l + 1);
	if (!(str))
		return (NULL);
	str_l = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[str_l++] = strs[i][j++];
		j = 0;
		while (j < sep_l)
			str[str_l++] = sep[j++];
		i++;
	}
	str[str_l] = '\0';
	return (str);
}

int	main()
{
	char *sep = " ";
	char *strs[] = {"I", "have", "the", "high", "ground", "Anakin!"};
	char *str = ft_strjoin(6, strs, sep);
	printf("%s", str);
	free(str);
	return 0;
}
