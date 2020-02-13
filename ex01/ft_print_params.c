/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 18:19:19 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 18:25:33 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int nb, char **params);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}

void	ft_print_params(int nb, char **params)
{
	int i;

	i = 0;
	while (++i < nb)
	{
		ft_putstr(params[i]);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}
