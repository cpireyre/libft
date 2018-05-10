/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 10:20:41 by cpireyre          #+#    #+#             */
/*   Updated: 2018/05/10 13:00:00 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	free_cat(char **gnl, char *tmp)
{
	size_t	combined_size;

	if (!tmp || !(*tmp))
		return ;
	combined_size = ft_strlen(*gnl) + ft_strlen(tmp);
	*gnl = ft_realloc(*gnl, combined_size + 1);
	*gnl = ft_strcat(*gnl, tmp);
}

static void	get_one_line(char **gnl, char **line)
{
	int		split;
	char	*tmp;

	if (!gnl)
		return ;
	split = ft_strclen(*gnl, SPLIT);
	if (split != -1)
	{
		*(*gnl + split) = 0;
		*line = ft_strdup(*gnl);
		tmp = *gnl;
		*gnl = ft_strdup(tmp + split + 1);
		free(tmp);
	}
	else
	{
		split = ft_strlen(*gnl);
		*line = ft_strdup(*gnl);
		ft_strdel(gnl);
	}
}

t_gnl		*get_fd(const int fd, t_gnl ***gnl)
{
	t_gnl	*tmp;
	size_t	i;

	if (!*gnl)
	{
		*gnl = ft_memalloc(sizeof(t_gnl*));
		**gnl = ft_memalloc(sizeof(t_gnl));
	}
	tmp = **gnl;
	i = 0;
	while (tmp)
	{
		if (tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	*gnl = ft_realloc(*gnl, sizeof(t_gnl*) * (i + 1));
	tmp = ft_memalloc(sizeof(t_gnl));
	tmp->fd = fd;
	tmp->next = **gnl;
	**gnl = tmp;
	return (tmp);
}

int			get_next_line(const int fd, char **line)
{
	static t_gnl	**gnl;
	t_gnl			*tmp;
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (!line || fd < 0)
		return (-1);
	tmp = get_fd(fd, &gnl);
	while ((ret = read(tmp->fd, buf, BUFF_SIZE)) || (tmp->str && *(tmp->str)))
	{
		if (ret < 0 || (buf[ret] = 0))
			return (-1);
		free_cat(&tmp->str, buf);
		if (*(tmp->str) && (ft_strchr(tmp->str, SPLIT) || ret < BUFF_SIZE))
		{
			get_one_line(&(tmp->str), line);
			return (1);
		}
	}
	return (0);
}
