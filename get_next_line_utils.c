/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 09:50:41 by mobaz             #+#    #+#             */
/*   Updated: 2019/10/31 23:13:59 by mobaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

char		*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

char		*ft_strdup(char *str)
{
	char *dst;

	dst = malloc(ft_strlen(str) + 1);
	if (dst)
		ft_strcpy(dst, str);
	return (dst);
}

char		*ft_substr(char *s, unsigned int start, size_t len)
{
	int		i;
	char	*ptr;
	size_t	lens;

	if (!s)
		return (0);
	lens = ft_strlen(s);
	if (lens < start)
		len = 0;
	i = 0;
	ptr = (char*)malloc(len + 1);
	if (!ptr)
		return (0);
	while (i < (int)len && start < lens)
		*(ptr + i++) = *(s + start++);
	*(ptr + i) = '\0';
	return (ptr);
}

void		*ft_char_calloc(size_t count)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = malloc(count);
	if (ptr)
	{
		while ((int)(count) > i)
		{
			*(char*)(ptr + i) = 0;
			i++;
		}
		return (ptr);
	}
	return (0);
}
