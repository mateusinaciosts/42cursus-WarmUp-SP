/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:20:33 by matsanto          #+#    #+#             */
/*   Updated: 2023/04/29 15:56:15 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *display)
{
	int		fd;
	char	buffer;

	fd = open(display, O_RDONLY);
	while (read(fd, &buffer, 1) != '\0')
	{
		write(1, &buffer, 1);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "File name missing.", 18);
		write(1, "\n", 1);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 2)
	{
		ft_display_file(argv[1]);
	}
}
