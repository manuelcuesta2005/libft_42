/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:51:14 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/09/17 13:59:17 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c <= 57 && c >= 48) || ((c <= 90 && c >= 65) || (c <= 122 && c >= 97)))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main()
{
    printf("%d", ft_isalnum('-'));    
}
*/
