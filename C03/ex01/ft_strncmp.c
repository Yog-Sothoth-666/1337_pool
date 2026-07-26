/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 11:38:32 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/25 12:10:41 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				val;
	unsigned int	i;

	val = 0;
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		val = s1[i] - s2[i];
		if (val != 0)
			return (val);
		i++;
	}
	return (val);
}
