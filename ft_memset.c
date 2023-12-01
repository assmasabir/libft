/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: techwhimsy <techwhimsy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:16:56 by asabir            #+#    #+#             */
/*   Updated: 2023/11/30 23:25:35 by techwhimsy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)ptr)[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
// #include<stdio.h>
// int main()
// {
// 	char s[10];
// 	char *s2;
// 	s2= (char *)ft_memset(s, -97, 3);
// 	printf("%s", s2);
// }