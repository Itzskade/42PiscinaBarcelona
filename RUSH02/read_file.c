#include "structs.h"
#include <fcntl.h>

char	*read_file(char *filename)
{
	int		fd;
	int		bytes;
	char	buffer[4096];
	char	*content;
	int		i;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	bytes = read(fd, buffer, 4096);
	close(fd);
	if (bytes <= 0)
		return (0);
	content = malloc(bytes + 1);
	if (!content)
		return (0);
	i = -1;
	while (++i < bytes)
		content[i] = buffer[i];
	content[i] = '\0';
	return (content);
}