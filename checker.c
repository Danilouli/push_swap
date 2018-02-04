/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 12:30:58 by dsaadia           #+#    #+#             */
/*   Updated: 2018/02/04 15:48:26 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv) {
	// int fd;
	int	i;
	int alen;
	// char *line;
	int *atab;

	if (argc < 2)
		return (1);
	argv++;
	i = 0;
	// while (get_next_line(fd, &line))
	// {
	// 	ft_printf("Cmd : %s\n",line);
	// }
	atab = create_a(argv, &alen);
	while (i < alen)
	{
		ft_printf("%d\n",atab[i]);
		i++;
	}
	return (0);
}
