/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryptodatabasm<cryptodatabasm@student.4    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:16:00 by vaktas            #+#    #+#             */
/*   Updated: 2026/03/24 15:25:39 by cryptodatab      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *extract_line(char *save)
{
    int i;
    char *s;

    if (!save || !*save)
        return(NULL);
    i = 0;
    while (save[i] && save[i] != '\n')
    {
        i++;
    }
    s = malloc(i + 2);
    if (!s)
        return(NULL);
    s = ft_memcpy(s, save, i + 1);
    s[i + 1] = '\0';
    return (s);
}

static char *update_save(char *save)
{
    int i;
    int j;
    char *s;

    i = 0;
    j = 0;
    while (save[i] && save[i] != '\n')
        i++;
    if (!save[i])
    {
        free(save);
        return (NULL);
    }
    s = malloc(ft_strlen(save) - i + 1);
    if (!s)
        return (NULL);
    i++;
    while (save[i])
        s[j++] = save[i++];
    s[j] = '\0';
    free(save);
    return (s);
}

static char *read_and_save(int fd, char *save)
{
    char    *buffer;
    int     read_bytes;

    buffer = malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return (NULL);
    read_bytes = 1;
    while (!ft_strchr(save, '\n') && read_bytes != 0)
    {
        read_bytes = read(fd, buffer, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free(buffer);
            free(save);
            return (NULL);
        }
        buffer[read_bytes] = '\0';
        save = ft_gnljoin(save, buffer);
    }
    free(buffer);
    return (save);
}

char *get_next_line(int fd)
{
    static char *save;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    save = read_and_save(fd, save);
    if (!save)
        return (NULL);
    line = extract_line(save);
    save = update_save(save);
    return (line);
}
