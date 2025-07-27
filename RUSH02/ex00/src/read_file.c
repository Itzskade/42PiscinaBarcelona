/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:56:37 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/27 16:56:39 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"
#include <fcntl.h>

char	*read_file(char *dict_file)
{
	int		fd;
	int		bytes;
	char	buffer[4096];
	char	*content;
	int		i;

	fd = open(dict_file, O_RDONLY);
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
