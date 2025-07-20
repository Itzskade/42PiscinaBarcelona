#include "skyscraper.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	validate_line(int *line, int clue)
{
    int 	i;
    int 	count;

    i = 0;
    while (i < 4)
    {
        if (line[i] == 0)
            return (1);
        i++;
    }
    if (clue == 0)	
        return (1);
    count = count_visible(line);
    return (count == clue);
}

void	write_error(void)
{
	write(1, "Error\n", 6);
}
