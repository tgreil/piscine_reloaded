/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 10:28:31 by tgreil            #+#    #+#             */
/*   Updated: 2018/02/07 15:26:14 by tgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;
	int i;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	i = 1;
	total = 1;
	while (i <= nb)
	{
		total = total * i;
		i++;
	}
	return (total);
}
