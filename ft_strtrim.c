/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: techwhimsy <techwhimsy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:18:25 by asabir            #+#    #+#             */
/*   Updated: 2023/12/01 18:04:58 by techwhimsy       ###   ########.fr       */
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

static char	*return_string(char *res, const char *s1, int i, int j)
{
	int	index;

	index = 0;
	while (i <= j)
	{
		res[index] = s1[i];
		i++;
		index++;
	}
	res[index] = '\0';
	return (res);
}

static char	*check_len(void)
{
	char	*res;

	res = (char *)malloc(1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;
	int		len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && search(s1[i], set))
		i++;
	while (j >= 0 && search(s1[j], set))
		j--;
	len = j - i + 1;
	if (len <= 0)
		return (check_len());
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	return (return_string(res, s1, i, j));
}
