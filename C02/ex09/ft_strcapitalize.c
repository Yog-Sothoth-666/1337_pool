/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 10:06:13 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/22 11:42:56 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha_num(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str >= 'a' && *str <= 'z')
		return (1);
	else if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

void	ft_lower(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
}

void	ft_upper(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_is_alpha_num(&str[i]))
	{
		ft_upper(&str[i]);
	}
	i++;
	while (str[i])
	{
		if (ft_is_alpha_num(&str[i]) && !(ft_is_alpha_num(&str[i - 1])))
		{
			ft_upper(&str[i]);
		}
		else
			ft_lower(&str[i]);
		i++;
	}
	return (str);
}
