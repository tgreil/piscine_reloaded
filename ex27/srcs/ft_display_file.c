/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgreil <tgreil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 10:11:46 by tgreil            #+#    #+#             */
/*   Updated: 2018/02/22 10:31:20 by tgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int ac, char **av)
{
	char	buf[BUF_SIZE];
	int		r_size;
	int		fd;

	if (ac < ARGS_NBR_OK)
		return (EXIT_ERROR + ft_putstr_error(MSG_ERR_FILE_MISS));
	else if (ac > ARGS_NBR_OK)
		return (EXIT_ERROR + ft_putstr_error(MSG_ERR_TOO_M_ARGS));
	if ((fd = open(av[1], O_RDONLY)) < 0)
		return (EXIT_ERROR + ft_putstr_error(MSG_ERR_OPEN));
	while ((r_size = read(fd, buf, BUF_SIZE)) == BUF_SIZE)
		write(1, buf, BUF_SIZE);
	if (r_size < 0)
		return (EXIT_ERROR + ft_putstr_error(MSG_ERR_READ));
	write(1, buf, r_size);
	close(fd);
	return (EXIT_SUCCESS);
}
