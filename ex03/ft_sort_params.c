/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:56:09 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 18:16:18 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_sort_params(int seuil, int max, char **tab_str);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_params(int nb, char **params);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	ft_sort_params(0, argc, argv);
	ft_print_params(argc, argv);
}

int		ft_sort_params(int seuil, int max, char **tab_str)
{
	int i;
	char *index;

	i = seuil;
	if (seuil == max)
		return(0);
	else
	{
		while (++i < max)
			if(ft_strcmp(tab_str[seuil], tab_str[i]) > 0)
			{
				index = tab_str[seuil];
				tab_str[seuil] = tab_str[i];
				tab_str[i] = index;
			}
		ft_sort_params(seuil + 1, max, tab_str);
		return (0);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (!s2[i])
			return (s1[i]);
		if (s1[i] < s2[i])
			break ;
		if (s1[i] > s2[i])
			break ;
		i++;
	}
	if (s1[i])
		return (s1[i] - s2[i]);
	else if (s2[i])
		return (0 - s2[i]);
	else
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
