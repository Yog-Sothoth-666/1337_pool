/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <ykhaldou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 10:12:19 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/08/03 11:09:25 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include <stdlib.h>

int	ft_check(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	wrd_count(char *str, char *charset)
{
	int	i;
	int	wrd;

	i = 0;
	wrd = 0;
	if (!ft_check(str[i], charset) && str[i])
		wrd = 1;
	i++;
	while (str[i])
	{
		if (!ft_check(str[i], charset) && ft_check(str[i - 1], charset))
			wrd++;
		i++;
	}
	return (wrd);
}

int	wrd_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!ft_check(str[i], charset) && str[i])
		i++;
	return (i);
}

char	*mk_str(char *str, char *charset)
{
	char	*nstr;
	int		i;

	i = 0;
	nstr = malloc(wrd_len(str, charset) + 1);
	while (!ft_check(*str, charset) && *str)
		nstr[i++] = *str++;
	nstr[i] = '\0';
	return (nstr);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = wrd_count(str, charset);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	strs[i] = NULL;
	i = 0;
	while (*str)
	{
		while (ft_check(*str, charset))
			str++;
		if (!*str)
			break ;
		strs[i++] = mk_str(str, charset);
		while (!ft_check(*str, charset) && *str)
			str++;
	}
	return (strs);
}
/*
int main()
{
	char *str = " this, is a, test. Try and...Keep up ";
	char *set = ",. ";
	char **strs;
	int i = 0;
	strs = ft_split(str, set);
	while (strs[i] != NULL)
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
}
*/
