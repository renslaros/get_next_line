/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/07 14:30:34 by rlaros         #+#    #+#                */
/*   Updated: 2019/03/05 18:04:55 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 50000
# define MAX_FD 4864
# define ENDL '\n'
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);
#endif
