/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:56:52 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/27 16:56:54 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int	count_lines(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

char	*copy_line(char *str, int start, int end)
{
	char	*line;
	int		i;
	int		len;

	len = end - start;
	line = malloc(len + 1);
	if (!line)
		return (0);
	i = 0;
	while (start < end)
	{
		line[i] = str[start];
		i++;
		start++;
	}
	line[i] = '\0';
	return (line);
}

int	free_lines(char **lines, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(lines[i]);
		i++;
	}
	free(lines);
	return (0);
}

int	fill_split(char **result, char *str)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			result[j] = copy_line(str, start, i);
			if (!result[j])
				return (free_lines(result, j));
			j++;
			start = i + 1;
		}
		i++;
	}
	result[j] = 0;
	return (1);
}

char	**split_lines(char *str)
{
	int		lines;
	char	**result;

	lines = count_lines(str);
	result = malloc(sizeof(char *) * (lines + 1));
	if (!result)
		return (0);
	if (!fill_split(result, str))
		return (0);
	return (result);
}
