/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhaldou <ykhaldou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:26:51 by ykhaldou          #+#    #+#             */
/*   Updated: 2026/08/02 14:40:48 by ykhaldou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define TRUE		1
# define FALSE		0
# define EVEN(nbr)	(nbr % 2 == 0)
# define SUCCESS	0
# define EVEN_MSG	"I have an even number of arguments."
# define ODD_MSG	"I have an odd number of arguments."
#endif
