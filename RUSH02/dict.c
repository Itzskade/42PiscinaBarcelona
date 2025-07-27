#include "structs.h"

char	**get_lines(char *dict_file, int *lines_count, char **content)
{
	char	**lines;

	*content = read_file(dict_file);
	if (!*content)
		return (0);
	*lines_count = count_lines(*content);
	lines = split_lines(*content);
	if (!lines)
	{
		free(*content);
		return (0);
	}
	return (lines);
}

char	*find_value_from_key(t_dict *dict, int size, char *key)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (dict[i].key && ft_strcmp(dict[i].key, key) == 0)
			return (dict[i].value);
		i++;
	}
	return (0);
}

void	free_dict(t_dict *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (dict[i].key)
			free(dict[i].key);
		if (dict[i].value)
			free(dict[i].value);
		i++;
	}
	free(dict);
}

int	fill_dict(t_dict *dict, char **lines, int lines_count)
{
	int	i;
	int	valid;

	i = 0;
	valid = 0;
	while (i < lines_count)
	{
		if (parse_line(lines[i], &dict[valid].key, &dict[valid].value))
			valid++;
		i++;
	}
	return (valid);
}

t_dict	*load_dict(char *dict_file, int *size)
{
	char	*content;
	char	**lines;
	t_dict	*dict;
	int		lines_count;

	lines = get_lines(dict_file, &lines_count, &content);
	if (!lines)
		return (0);
	dict = malloc(sizeof(t_dict) * lines_count);
	if (!dict)
	{
		free_lines(lines, lines_count);
		free(content);
		return (0);
	}
	*size = fill_dict(dict, lines, lines_count);
	free_lines(lines, lines_count);
	free(content);
	return (dict);
}