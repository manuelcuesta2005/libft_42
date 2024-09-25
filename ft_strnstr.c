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
    while (big[i] != '\0' && i < len)
    {
        if (big[i] == little[j])
        {
            big[i] = little[j];
            i++;
            j++;
        }
    }
}

/*
#include <stdio.h>
int main ()
{
    const char  *string = "foo bar baz";
    const char  *little = "bar";
    printf("%s", ft_strnstr(string, little, 5));
}
*/
