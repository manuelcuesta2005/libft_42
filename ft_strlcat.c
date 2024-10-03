/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:15:35 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/10/02 11:57:47 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	int	len_dst;

	i = 0;
	j = 0;
	len_dst = 0;
	while (dst[j] != '\0')
	{
		len_dst = j + 1;
		j++;
	}
	while (src[i] != '\0' && i < size)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + size);
}

/*
#include <stdio.h>
int main()
{
    char source[] = " desde aqui en la tierra";
    char destination[] = "vamoooos";
    printf("String original: '%s' ", source);
    printf("\n");
    printf("strlcat: '%zu' ", ft_strlcat(destination, source, 8));
    printf("\n");
    printf("new string: '%s' ", destination);
}
*/
