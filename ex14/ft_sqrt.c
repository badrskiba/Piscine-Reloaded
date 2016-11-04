/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:36:48 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/02 18:51:01 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int racine;
	int test;

	racine = 1;
	test = 0;
	while (test <= nb)
	{
		test = racine * racine;
		if (test == nb)
		{
			return (racine);
		}
		racine++;
	}
	return (0);
}
