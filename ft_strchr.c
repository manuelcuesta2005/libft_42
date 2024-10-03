/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:05:02 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/09/20 14:05:05 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    char *foundChar;

    if(s == NULL)
        return(write(1, "pasa un strin joder", 19), NULL);
    i = 0;
    foundChar = (char *)s;
    while (s[i] != '\0')
    {
        if (foundChar[i] == (unsigned char)c)
            return(write(1, "hemos encontrado el caracter :", 30),&foundChar[i]);
            i++;
    }
   return (NULL);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    //char cadena[] = "hola mundo";
    printf("%s", ft_strchr(argv[2], argv[1][0]));
}
