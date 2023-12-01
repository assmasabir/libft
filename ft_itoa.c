/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: techwhimsy <techwhimsy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:15:32 by asabir            #+#    #+#             */
/*   Updated: 2023/11/29 17:58:58 by techwhimsy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_size(int nb)
{
	unsigned int	len;

	len = 0;
	if (nb < 0)
		len += 1;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*handle_negative(char *res, int n, int len)
{
	int	length;

	length = len;
	n = -n;
	res[0] = '-';
	len--;
	while (len > 0)
	{
		res[len] = n % 10 + '0';
		len--;
		n /= 10;
	}
	res[length] = '\0';
	return (res);
}

static char	*handle_positive(char *res, int n, int len)
{
	int	length;

	length = len;
	len -= 1;
	while (len >= 0)
	{
		res[len] = n % 10 + '0';
		len--;
		n /= 10;
	}
	res[length] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_size(n);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res = handle_negative(res, n, len);
	}
	else
	{
		res = handle_positive(res, n, len);
	}
	return (res);
}
