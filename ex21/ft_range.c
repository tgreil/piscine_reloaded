/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 15:57:51 by tgreil            #+#    #+#             */
/*   Updated: 2018/02/08 15:57:52 by tgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (size < 0)
		size *= -1;
	if (min >= max)
		return (NULL);
	if (!(new = malloc(sizeof(int) * size)))
		return (NULL);
	while (min + i < max)
	{
		new[i] = min + i;
		i++;
	}
	return (new);
}
