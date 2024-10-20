/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_char_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:15:43 by sel-jett          #+#    #+#             */
/*   Updated: 2024/10/19 21:28:05 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d_bonus.h"

char	*ft_strjoin_char(char const *s1, char s2)
{
	char	*str;
	size_t	size;
	size_t	i;

	size = ft_strlen((char *)s1) + 1;
	str = my_malloc(sizeof(char) * (size + 1), 1);
	if (!str)
		return (0);
	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	size = 0;
	str[i + size] = s2;
	size++;
	str[i + size] = '\0';
	return (str);
}
