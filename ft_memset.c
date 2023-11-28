/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:16:56 by asabir            #+#    #+#             */
/*   Updated: 2023/11/28 23:16:57 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((char *)ptr)[i] = (char)value;
		i++;
	}
	return (ptr);
}
