/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:56:09 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 16:29:57 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sort_params(int seuil, int max, char **tab_str);
int		ft_strcmp(char *s1, char *s2);
void	ft_switch(char *s1, char *s2);

int		main(int argc, char **argv)
{
	ft_sort_params(0, argc, argv);
}

int		ft_sort_params(int seuil, int max, char **tab_str)
{
	int i;

	i = seuil;
	if (seuil == max)
		return(0);
	else
	{
		while (++i < max)
			if(ft_strcmp(tab_str[seuil], tab_str[i]) < 0)
				ft_switch(tab_str[seuil], tab_str[i]);
		ft_sort_params(seuil + 1, max, tab_str);
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

void	ft_switch(char *s1, char *s2)
{
	char *inter;
	inter = s1;
	s1 = s2;
	s2 = inter;
}
