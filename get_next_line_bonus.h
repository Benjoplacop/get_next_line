/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:52:42 by bhennequ          #+#    #+#             */
/*   Updated: 2023/02/20 14:53:09 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

size_t	ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nelem, size_t size);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *str, char *buff);
char	*get_line(char *str);
char	*read_str(int fd, char *str);
char	*next_line(char *str);
char	*get_next_line(int fd);

#endif
