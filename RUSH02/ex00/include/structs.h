/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:57:45 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/27 16:57:46 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <stdlib.h>
# include <unistd.h>

// Estructura para las entradas del diccionario
typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;

// utils.c
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_substr(char *str, int start, int len);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strncpy(char *dest, char *src, int n);

// utils2.c
int		is_valid_number(char *str);
void	ft_bzero(void *s, int n);
char	*pad_triplet(char *triplet);
int		is_zero_triplet(char *triplet);

// read_file.c
char	*read_file(char *dict_file);

// parse_line.c
int		skip_whitespace(char *str, int i);
char	*extract_key(char *line, int *pos);
char	*extract_value(char *line, int start);
int		parse_line(char *line, char **key, char **value);

// split_lines.c
int		count_lines(char *str);
char	**split_lines(char *str);
int		free_lines(char **lines, int count);

// dict.c
t_dict	*load_dict(char *dict_file, int *size);
int		fill_dict(t_dict *dict, char **lines, int lines_count);
char	*find_value_from_key(t_dict *dict, int size, char *key);
void	free_dict(t_dict *dict, int size);

// scale.c
int		get_zeros_count(int index);
char	*get_scale_key(int index);

// process_triplet.c
void	process_tens_units(t_dict *dict, int size, char *triplet);
void	process_units(t_dict *dict, int size, char *triplet);
void	process_tens(t_dict *dict, int size, char *triplet);
void	process_teens(t_dict *dict, int size, char *triplet);
void	process_triplet(t_dict *dict, int size, char *triplet);

// process_number.c
void	print_value(char *value, int add_space);
void	print_scale_name(t_dict *dict, int size, int index);
char	*get_padded_triplet(char *number, int i, int len);
void	print_scale_name(t_dict *dict, int size, int index);
void	process_number(t_dict *dict, int size, char *number);

#endif
