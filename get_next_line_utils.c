/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryptodatabasm<cryptodatabasm@student.4    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:16:00 by vaktas            #+#    #+#             */
/*   Updated: 2026/03/24 14:58:30 by cryptodatab      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	str;

	if (!s)
		return (NULL);
	str = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == str)
			return ((char *)s);
		s++;
	}
	if (str == '\0')
		return ((char *)s);
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s, len + 1);
	return (p);
}

char	*ft_gnljoin(char *save, char *buffer)
{
	char	*join;
	
	if (!save)
		save = ft_strdup("");
	if (!save || !buffer)
		return (NULL);
	join = (char *)malloc(ft_strlen(save) + ft_strlen(buffer) + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, save, ft_strlen(save));
	ft_memcpy(join + ft_strlen(save), buffer, ft_strlen(buffer));
	join[ft_strlen(save) + ft_strlen(buffer)] = '\0';
	free(save);
	return (join);
}
