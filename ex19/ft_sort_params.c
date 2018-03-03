/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 14:49:49 by tgreil            #+#    #+#             */
/*   Updated: 2018/02/08 14:49:49 by tgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	sort_params(int ac, char **av)
{
	char	*tmp;
	int		i;

	i = 2;
	while (i < ac)
	{
		if (ft_strcmp(av[i - 1], av[i]) > 0)
		{
			tmp = av[i - 1];
			av[i - 1] = av[i];
			av[i] = tmp;
			i = 1;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int	i;
	int	n;

	sort_params(ac, av);
	i = 1;
	while (i < ac)
	{
		n = 0;
		while (av[i][n])
		{
			ft_putchar(av[i][n]);
			n++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
