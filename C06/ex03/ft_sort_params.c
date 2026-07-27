/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 13:14:50 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/27 12:31:13 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int n, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (str[i][j])
			write(1, &str[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	if (argc != 1)
	{
		i = 1;
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[j];
					argv[j] = tmp;
				}
				j++;
			}
			i++;
		}
		ft_putstr(argc, argv);
	}
}
