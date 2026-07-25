/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:38:51 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/07/25 11:59:59 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char  *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

char    *ft_strstr(char *str, char      *to_find)
{
        int     i;
        int     length;
        int     j;

        length = ft_strlen(to_find);
        i = 0;
        if (to_find[0] == '\0')
                return (str);
        while (str[i])
        {
                j = 0;
                while (j < length && str[i + j] == to_find[j])
                        j++;
                if (j == length)
                        return (&str[i]);
                i++;
        }
        return (NULL);
}
