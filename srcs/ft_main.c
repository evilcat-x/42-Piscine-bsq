/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirkby <nkirkby@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:28:24 by seli              #+#    #+#             */
/*   Updated: 2018/10/10 10:40:14 by nkirkby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc < 2)
		return (ft_map_error("too few args"));
	while (i < argc)
	{
		ft_solve_bsq(argv[i]);
		i++;
		write(1, "\n", 1);
	}
}
