/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:38:51 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/20 17:45:35 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *to_find)
{
	int	val;

	val = 0;
	while (*to_find)
	{
		val = *s1 - *to_find;
		if (val != 0)
			return (0);
		s1++;
		to_find++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (ft_strcmp(str, to_find))
			return (str);
		str++;
	}
	return (NULL);
}
