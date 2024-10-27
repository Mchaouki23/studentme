/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:19:43 by codespace         #+#    #+#             */
/*   Updated: 2024/10/27 11:19:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;
       
	len = 0;
	while(s[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	if(!dest || !src)
		return (0);
	size_t dlen;
	size_t slen;
	size_t i;
	size_t t;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || dlen >= size)
		return (size + slen);
	i = dlen;
	t = 0;
	while (i < (size - 1) && t < slen)
	{
		dest[i] = src[t];
		i++;
		t++;
	}
	dest[i] = '\0';

	return (dlen + slen);
}