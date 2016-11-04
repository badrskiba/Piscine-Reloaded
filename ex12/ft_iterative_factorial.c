/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:01:50 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/02 18:29:12 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int resultat;

	resultat = 1;
	if (nb < 0 || nb > 12)
		resultat = 0;
	while (nb > 1)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
