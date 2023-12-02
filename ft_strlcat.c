/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:17:46 by asabir            #+#    #+#             */
/*   Updated: 2023/12/02 11:39:44 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sized;
	size_t	sizes;

	i = 0;
	sized = ft_strlen((const char *)dest);
	sizes = ft_strlen(src);
	j = sized;
	if (size == 0)
	{
		return (sizes);
	}
	if (size <= sized)
	{
		return (sizes + size);
	}
	while (i < size - sized - 1 && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sizes + sized);
}
