/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:53:57 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/09/18 17:53:59 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (*little == '\0')
        return((char *)big);
    while (big[i] != '\0' && i < len)
    {
        if (little[0] == big[i])
        {
            while(little[j] != '\0' && (i + j) < len)
            {
                if(big[i + j] != little[j])
                    break;
                j++;
            }
            if (little[j] == '\0')
                return ((char *)&big[i]);
        }
        i++;
    }
    return (NULL);
}

/*
#include <stdio.h>
int main ()
{
    const char  *string = "foo bar baz";
    const char  *little = "bar";
    printf("%s", ft_strnstr(string, little, 11));
}
*/