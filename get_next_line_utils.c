/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:39:28 by yel-hadi          #+#    #+#             */
/*   Updated: 2025/12/03 13:39:44 by yel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *save, char *buffer)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!save)
	{
		save = malloc(1);
		if (!save)
			return (NULL);
		save[0] = '\0';
	}
	result = malloc(ft_strlen(save) + ft_strlen(buffer) + 1);
	if (!result)
		return (NULL);
	i = -1;
	while (save[++i])
		result[i] = save[i];
	j = 0;
	while (buffer[j])
		result[i++] = buffer[j++];
	result[i] = '\0';
	free(save);
	return (result);
}

char	*ft_strchr(char *save, int c)
{
	int	i;

	if (!save)
		return (NULL);
	i = 0;
	while (save[i])
	{
		if (save[i] == (char)c)
			return (&save[i]);
		i++;
	}
	if (save[i] == (char)c)
		return (&save[i]);
	return (NULL);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
