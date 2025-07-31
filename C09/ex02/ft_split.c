/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:10:05 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/30 18:21:15 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !is_separator(*str, charset))
			str++;
	}
	return (count);
}

char	*word_dup(char *start, char *end)
{
	char	*word;
	char	*copy;
	int		len;

	len = end - start;
	word = malloc(sizeof(*word) * (len + 1));
	if (!word)
		return (NULL);
	copy = word;
	while (start < end)
		*copy++ = *start++;
	*copy = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*start;
	int		i;

	result = malloc(sizeof(*result) * (count_word(str, charset) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_separator(*str, charset))
		{
			start = str;
			while (*str && !is_separator(*str, charset))
				str++;
			result[i++] = word_dup(start, str);
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char *str = "Hello,,world;this:is;Piscine!";
	char *charset = ",;:";
	char **words = ft_split(str, charset);
	char **ptr = words;
    
    while (*ptr)
    {
				printf("Word: %s\n", *ptr);
				free(*ptr);
	ptr++;
    }
    free(words);

    return 0;
}
*/
