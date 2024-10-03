/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:50:39 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/10/02 11:36:09 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*source;
	char		*dst;
	int			i;

	dst = (char *)dest;
	source = (const char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main()
{
    char string[25] = "hola a todos";
    char destination[25] = "";
    ft_memcpy(destination, string, 4);
    printf("%s", destination);
}
*/
