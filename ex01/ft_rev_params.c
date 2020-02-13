/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 12:29:08 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 13:54:50 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse(char **strs, int nb)
{
	int i;

	while (--nb > 0)
	{
		i = -1;
		while (strs[nb][++i])
			write(1, &strs[nb][i], 1);
		write(1, "\n", 1);
	}
}

int		main(int argc, char **argv)
{
	ft_print_reverse(argv, argc);
	return (0);
}
