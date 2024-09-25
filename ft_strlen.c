/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:15:14 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/09/17 15:15:17 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
size_t	ft_strlen(const char *s)
{
	int	i;
	int	length;

	i = 0;
	while (s[i] != '\0')
	{
		length = i + 1;
		i++;
	}
	return (length);
}

/*
#include <stdio.h>
int main()
{
    char cadena[10] = "HOLA ";
    char cadena2[5] = "HOLA ";
    printf("%zu \n", ft_strlen(cadena));
    printf("%zu", ft_strlen(cadena2));
}
*/