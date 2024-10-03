/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:57:36 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/10/02 11:52:19 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) malloc(n * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main() {
    const char* original = "Hola, Mundo!";
    char* copia = ft_strdup(original, 10);
    if (copia == NULL) {
        printf("Error: No se pudo duplicar la cadena.\n");
        return 1;
    }
    printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", copia);
    
    free(copia);
    
    return 0;
}
*/
