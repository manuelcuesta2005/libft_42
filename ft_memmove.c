/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:51:05 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/09/18 17:51:07 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int length(const char *s)
{
    int length;
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        length = i + 1;
        i++;
    }
    return(length);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    int len_dst;
    char *dst;
    const char *source;

    i = 0;
    dst = (char *)dest;
    len_dst = length(dst);
    source = (const char *)src;
    while (i < n)
    {
        if (len_dst == 0)
        {
            dst[i] = source[i];
        } else {
            dst[len_dst + i] = source[i];
        }
        i++;
    }
    return (dest);
}

/*
#include <stdio.h>
int main()
{
    char source[] = " mundo";
    char destination[15] = "hola ";
    ft_memmove(destination, source, 4);
    printf("%s", destination );
}
*/