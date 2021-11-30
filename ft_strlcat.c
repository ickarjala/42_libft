/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:58:44 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/28 16:16:57by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	result;
	char	*ps;

	if (dstsize == 0 || !dst || !src)
		return (0);
	len = 0;
	while (*dst++ != '\0')
		len++;
	if (len >= dstsize)
		result = ft_strlen((char *)src) + dstsize;
	else
		result = len + ft_strlen((char *)src);
	dst--;
	ps = (char *)src;
	while (*ps != '\0' && len < dstsize - 1)
	{
		*dst++ = *ps;
		len++;
		ps++;
	}
	*dst = '\0';
	return (result);
}
