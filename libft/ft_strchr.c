/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:19:52 by codespace         #+#    #+#             */
/*   Updated: 2024/10/27 11:19:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while(*s != '\0')
	{
		if(*s == (char) c)
			return ((char *)s);
		s++;
	}
	if(c == '\0')
		return ((char *)s);
	return (NULL);	
}
