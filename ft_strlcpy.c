/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:05:20 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/10/02 11:59:27 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\n' && i < (int)size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (size);
}

/*
#include <stdio.h>
int main()
{
    char source[] = "hola mundo desde aqui en la luna";
    char destination[25];
    printf("String original: '%s' ", source);
    printf("\n");
    printf("strlcpy: '%zu' ", ft_strlcpy(destination, source, 20));
    printf("\n");
    printf("new string: '%s' ", destination);
}
*/
