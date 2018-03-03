/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgreil <tgreil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 10:12:10 by tgreil            #+#    #+#             */
/*   Updated: 2018/02/22 10:31:18 by tgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>

# define MSG_ERR_FILE_MISS		"File name missing.\n"
# define MSG_ERR_TOO_M_ARGS		"Too many arguments.\n"
# define MSG_ERR_OPEN			"An error occured to open file\n"
# define MSG_ERR_READ			"An error occured to read file\n"
# define EXIT_SUCCESS			0
# define EXIT_ERROR				-1
# define ARGS_NBR_OK			2
# define BUF_SIZE				4096

int				ft_putstr_error(char *s);

#endif
