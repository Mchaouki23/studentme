/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:19:49 by codespace         #+#    #+#             */
/*   Updated: 2024/10/27 11:19:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t    i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t    i;
	size_t    l;

	if(!src)
		return (0);
	l = ft_strlen(src);
	if(!dest || size == 0)
		return (l);
	i = 0;
	while (src [i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}