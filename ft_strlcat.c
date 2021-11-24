/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:58:44 by ikarjala          #+#    #+#             */
/*   Updated: 2021/11/24 15:58:46 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	char	*ps;

	if (dstsize == 0)
		return (0);
	if (!dst || !src)
		return (0);
	len = 0;
	while (*dst++ != '\0')
		len++;
	dst--;
	ps = (char *)src;
	while (len < dstsize - 1)
	{
		*dst++ = *ps;
		src += *ps != '\0';
		len += *ps != '\0';
	}
	*dst = '\0';
	return (len);
}
