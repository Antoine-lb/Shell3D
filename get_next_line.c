
#include "cub3d.h"
#define BUFFER_SIZE 1000

int		new_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		return (1);
	return (0);
}


char	*remove_line(char *store)
{
	int		i;
	int		x;
	char	*res;

	i = 0;
	x = 0;
	while (store[i] && store[i] != '\n')
		i++;
	if (!store[i])
	{
		if (!(res = (char*)malloc(1 * sizeof(char))))
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	while (store[x])
		x++;
	if (!(res = (char*)malloc((x - i) * sizeof(char))))
		return (NULL);
	x = 0;
	i++;
	while (store[i])
		res[x++] = store[i++];
	res[x] = '\0';
	return (res);
}

int		line_size(char *store)
{
	int	i;

	i = 0;
	while (store[i] && store[i] != '\n')
	{
		i++;
	}
	if (i == 0)
		return (0);
	return (i);
}

int		get_next_line_first_step(int fd, char **store,
			int *bytes_read, char *buf)
{
	char	*tmp;

	while (!new_line(*store) && (*bytes_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[*bytes_read] = '\0';
		if (!(tmp = ft_strjoin(*store, buf)))
			return (-1);
		free(*store);
		*store = tmp;
	}
	if (*bytes_read == -1)
		return (-1);
	return (1);
}

int		get_next_line_end(char **store, int *bytes_read)
{
	char		*tmp;

	tmp = remove_line(*store);
	if (tmp == NULL)
		return (-1);
	free(*store);
	*store = tmp;
	if (*bytes_read || *store[0])
		return (1);
	free(*store);
	*store = NULL;
	*bytes_read = 0;
	return (0);
}

int		get_next_line(int fd, char **line)
{
	static char	*store = NULL;
	static int	bytes_read = 0;
	char		buf[BUFFER_SIZE + 1];
	int			i;

	if (store == NULL && bytes_read == 0)
		store = ft_strjoin("", "");
	if ((fd < 0 || !line))
		return (-1);
	if (get_next_line_first_step(fd, &store, &bytes_read, buf) == -1)
		return (-1);
	if (!(line[0] = (char*)malloc((line_size(store) + 1) * sizeof(char))))
		return (-1);
	i = 0;
	while (store[i] && store[i] != '\n')
	{
		line[0][i] = store[i];
		i++;
	}
	line[0][i] = '\0';
	return (get_next_line_end(&store, &bytes_read));
}
