/*Procesa la entrada y valida las pistas*/

int	parse_input(char *str, int *clues)
{
	int	i;
	int	value;

	i = 0;
	while(*str)
	{
		while (*str == ' ')
			str++;
		if (*str >= '1' && *str <= '4')
		{
			value = *str - '0';
			clues[i] = value;
			str++;
			i++;
		} 
	}
	return (i == 16);
}
