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
char *ft_memchr(const char *s, int c)
{
    int i;
    char findChar;
    char *foundChar;

    i = 0;
    findChar = (unsigned char)c;
    while (s[i] != '\0')
    {
        if (s[i] == findChar)
            foundChar = s[i];
        else
            i++;
    }
    return (foundChar);
}

/*
#include <stdio.h>
int main()
{
    char cadena[] = "hola mundo";
    printf("%s", ft_memchr(cadena, 'o'));
}
*/