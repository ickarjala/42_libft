/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:35:04 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/01 16:13:39 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memdup(const void *s1, size_t len)
{
	char	*fresh;
	size_t	i;

	if (!s1 || len == 0)
		return (NULL);
	fresh = malloc(sizeof(char) * len);
	if (!fresh)
		return (NULL);
	i = -1;
	while (++i < len)
		fresh[i] = ((char *)s1)[i];
	return ((void *)fresh);
}