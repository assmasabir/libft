/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: techwhimsy <techwhimsy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:17:37 by asabir            #+#    #+#             */
/*   Updated: 2023/12/01 00:48:41 by techwhimsy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// #include<stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char ch[] = "hello iam assma";
//     char *result = malloc(sizeof(ch));

//     if (result == NULL)
//     {
//         fprintf(stderr, "Memory allocation failed\n");
//         return (1);
//     }

//     strcpy(result, ch);

//     ft_striteri(result, fc);
//     printf("%s\n", result);

//     free(result);

//     return (0);
// }