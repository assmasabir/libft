/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:18:25 by asabir            #+#    #+#             */
/*   Updated: 2023/11/28 23:18:26 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search(char const c, char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		index;
	char	*res;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	index = 0;
	while (s1[i] != '\0' && search(s1[i], set))
	{
		i++;
	}
	while (j >= 0 && search(s1[j], set))
	{
		j--;
	}
	int len = j - i + 1;
	    if (len <= 0 || s1[0] == '\0') {
        char *res = (char *)malloc(1);
        if (!res) {
            return NULL;
        }
        res[0] = '\0';
        return res;
    }
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
	{
		return (NULL);
	}
	while (i <= j)
	{
		res[index] = s1[i];
		i++;
		index++;
	}
	res[index] = '\0';
	return (res);
}
