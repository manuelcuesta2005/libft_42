/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:15:33 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/10/03 14:30:26 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char    *is_zero(int c)
{
    char    *cstr;

    if (c == 0)
    {
        cstr = (char *) malloc(2 * sizeof(char));
        cstr[0] = '0';
        cstr[1] = '\0';
    }
    return (cstr);
}

char *is_negative(int z)
{
    int count_z;
    int temporal;
    char *str_z;

    count_z = 0;
    temporal = z;
    if (z < 0)
    {
        while (temporal < 0)
        {
            temporal /= 10;
            count_z++;
        }
    }
    temporal = z * -1;
    str_z = (char *) malloc((count_z + 2) * sizeof(char));
    if (!str_z)
        return (NULL);
    str_z[++count_z] = '\0';
    while (temporal > 0)
    {
        str_z[--count_z] = (temporal % 10) + '0';
        temporal /= 10;
    }
    str_z[--count_z] = '-';
    return (str_z);
}

char    *ft_itoa(int n)
{
    int        count;
    char    *str;
    int        temporal;

    count = 0;
    temporal = n;
    if (n == 0)
        return (is_zero(n));
    if (n < 0)
        return (is_negative(n));
    while (temporal > 0)
    {
        temporal /= 10;
        count++;
    }
    str = (char *) malloc((count + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[count] = '\0';
    while (n > 0)
    {
        str[--count] = (n % 10) + '0';
        n /= 10;
    }
    return (str);
}

#include <stdio.h>
int main ()
{
    int number = 123;
    printf("%s", ft_itoa(number));
}