#include "structs.h"

int	skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

char	*extract_key(char *line, int *pos)
{
	int	start;
	int	end;

	start = skip_whitespace(line, 0);
	end = start;
	while (line[end] && line[end] != ':')
		end++;
	if (line[end] != ':')
		return (0);
	*pos = end;
	return (ft_substr(line, start, end - start));
}

char	*extract_value(char *line, int start)
{
	int	end;

	start = skip_whitespace(line, start + 1);
	end = start;
	while (line[end] && line[end] != '\n')
		end++;
	return (ft_substr(line, start, end - start));
}

int	parse_line(char *line, char **key, char **value)
{
	int	pos;

	*key = extract_key(line, &pos);
	if (!*key)
		return (0);
	*value = extract_value(line, pos);
	if (!*value)
	{
		free(*key);
		return (0);
	}
	return (1);
}