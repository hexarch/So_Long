/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:53:08 by alcelik           #+#    #+#             */
/*   Updated: 2023/01/04 14:06:15 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ber_control(char *map_name)
{
	int	arg_len;

	arg_len = ft_strlen(map_name);
	if (map_name[arg_len - 1] != 'r' || map_name[arg_len - 2] != 'e'
		|| map_name[arg_len - 3] != 'b' || map_name[arg_len - 4] != '.')
		err_msg("Error : Map file is not .ber");
	if (!map_name)
		free(map_name);
}

void	tmp_control(char *map_name)
{
	int		fd;

	fd = open(ft_strjoin("map/", map_name), O_RDONLY);
	if (fd == -1)
		err_msg("Error : Map file is not found");
	close(fd);
	if (!map_name)
		free(map_name);
}

void	map_control(char **argv, t_data *data)
{
	char	*map_name;
	char	*map_names;

	map_name = argv[1];
	map_names = ft_strjoin("map/", map_name);
	data->map_tmp = map_names;
	free(map_names);
	ber_control(argv[1]);
	tmp_control(argv[1]);
}
