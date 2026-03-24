/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryptodatabasm<cryptodatabasm@student.4    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:16:00 by vaktas            #+#    #+#             */
/*   Updated: 2026/03/24 15:01:21 by cryptodatab      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NET_LINE_H
# define GET_NET_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

# include <stdlib.h>
# include <unistd.h>

char    *get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_gnljoin(char *save, char *buffer);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);
#endif
