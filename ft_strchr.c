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
char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return (&s[i]);
        else
            i++;
    }
    return (0);
}

#include <stdio.h>
int main()
{
    char cadena[] = "hola mundo";
    printf("%s", ft_strchr(cadena, 'o'));
}
