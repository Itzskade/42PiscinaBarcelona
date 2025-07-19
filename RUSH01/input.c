/*Procesa la entrada y valida las pistas*/

int parse_input(char *str, int *clues)
{
	int	i;
	int	value;

	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str >= '1' && *str <= '4')
		{
			value = *str - '0';
			clues[i] = value;
			i++;
			str++;
		}
		else if (*str != '\0')
		{
			return 0;
		}
	}
	if (i != 16)
		return 0;
	return 1;
}
