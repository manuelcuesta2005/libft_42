/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:53:20 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/09/18 17:53:21 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char *ft_memchr(const char *s, int c, size_t n)
{
    int i;
    char findChar;
    char *str;

    i = 0;
    str = (char *)s;
    findChar = (unsigned char )c;
    while (i < n)
    {
        if (s[i] == (unsigned char)c)
            return(&str[i]);
        i++;
    }
    return (NULL);
}

/*
#include <stdio.h>
int main()
{
    const char buffer[] = {0x01, 0x02, 0x03, 0x04, 0x05};
    void *resultado = ft_memchr(buffer, 0x03, sizeof(buffer));
    printf("%02x\n", *(unsigned char *)resultado);
}
*/