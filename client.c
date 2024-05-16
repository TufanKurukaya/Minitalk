/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:40:09 by tkurukay          #+#    #+#             */
/*   Updated: 2024/03/24 14:23:45 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}

void	ft_error(char *str)
{
	ft_putstr(str);
	exit(1);
}

int	ft_atoi(char *str)
{
	int	index;

	index = 0;
	while (*str)
		index = index * 10 + (*str++ - '0');
	return (index);
}

void	ft_transfer_center(char c, int pid)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (i < 8)
	{
		if (c << i & 128)
			check = kill(pid, SIGUSR1);
		else
			check = kill(pid, SIGUSR2);
		i++;
		usleep(150);
	}
	if (check == -1)
		ft_error("Error\n");
}

int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	if (arc == 3)
		while (arv[2][i])
			ft_transfer_center(arv[2][i++], ft_atoi(arv[1]));
	else
		ft_error("Error\nInvalid arguments\n");
	return (0);
}
