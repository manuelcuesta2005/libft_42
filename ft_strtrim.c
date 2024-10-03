/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:46:58 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/10/02 12:03:07 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

int	setchar(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	size_t		new_len;
	char		*result;
	char		*trimmed_str;

	start = s1;
	while (setchar(*start, set))
		start++;
	if (*start == '\0')
	{
		*result = (char *)malloc(1);
		result[0] = '\0';
		return (result);
	}
	end = start + ft_strlen(start) - 1;
	while (end > start && setchar(*end, set))
		end--;
	new_len = end - start + 2;
	*trimmed_str = (char *)malloc(new_len);
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, start, new_len - 1);
	trimmed_str[new_len - 1] = '\0';
	return (trimmed_str);
}
/*
#include <stdio.h>
int main() {
    char str[] = "++--__Hola, mundo!__--++";
    const char *set = "+-_";

    char *result = ft_strtrim(str, set);
    if (result != NULL) {
        printf("Original: '%s'\n", str);
        printf("Modificado: '%s'\n", result);
        free(result);
    }
    return 0;
}
*/
