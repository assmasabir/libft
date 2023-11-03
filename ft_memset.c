/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: techwhimsy <techwhimsy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:34:55 by asabir            #+#    #+#             */
/*   Updated: 2023/11/03 16:30:20 by techwhimsy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *ptr, int value, size_t size )
{
	size_t i;
	
	i = 0;
	while(i < size)
	{
		((char *)ptr)[i] = (char)value;
		i++;
	}
	return ((char*)ptr);
}
int main()
{
    int buffer[20];  

   
    
    memset(buffer, 8, sizeof(buffer));


    for (int i = 0; i < 20; i++)
    {
        printf("%d", buffer[i]);
    }
    
    printf("\n");

    return 0;
}
