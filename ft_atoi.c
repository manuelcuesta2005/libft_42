/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:54:14 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/09/18 17:54:16 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *nptr)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
    {
        i++;
    }
    while (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return (result * sign);
}

/*
#include <stdio.h>
int main ()
{
   char number[] = " -9885";
   ft_atoi(number);
   printf("%s", number);

}
*/