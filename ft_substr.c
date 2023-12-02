/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:18:31 by asabir            #+#    #+#             */
/*   Updated: 2023/12/02 11:24:43 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*res;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		p = (char *)malloc(1 * sizeof(char));
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	res = allocate_substr(s, start, len);
	if (!res)
	{
		return (NULL);
	}
	return (res);
}
