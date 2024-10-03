/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:53:42 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/10/01 13:21:24 by mcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//TERMINAR ESTE PROYECTO
#include <stdlib.h>
#include "libft.h"

int	count_strings(char const *string, char chr)
{
	int	count_delimiter;

	count_delimiter = 0;
	while (*string != '\0')
	{
		if (*string == chr)
			count_delimiter++;
		string++;
	}
	return (count_delimiter);
}

void	free_memory(char **array, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**error_malloc(char **array, int j)
{
	if (array == NULL)
	{
		free_memory(array, j);
		return (NULL);
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	start;
	char	**substr;

	i = 0;
	j = 0;
	start = 0;
	substr = (char **) malloc((count_strings(s, c) + 1) * sizeof(char *));
	if (error_malloc(substr, 0) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			substr[j] = (char *) malloc((i - start + 1) * sizeof(char));
			if (error_malloc(&substr[j], j) == NULL)
				return (NULL);
			ft_strlcpy(substr[j], &s[start], i - start);
			substr[j][i - start] = '\0';
			j++;
			start = i + 1;
		}
		i++;
	}
	substr[j] = (char *)malloc((i - start + 1) * sizeof(char));
	if (!substr[j])
		return (NULL);
	ft_strlcpy(substr[j], &s[start], i - start);
	substr[j][i - start] = '\0';
	j++;
	substr[j] = NULL;
	return (substr);
}

#include <stdio.h>
int main (int argc, char **argv)
{
    char **tokens = ft_split(argv[2], argv[1][0]);

    int i = 0;
    while (tokens[i] != NULL) 
	{
        printf("%s\n", tokens[i]);
        i++;
    }

    i = 0;
    while (tokens[i] != NULL) 
	{
        free(tokens[i]);
        i++;
    }
    free(tokens);
}

