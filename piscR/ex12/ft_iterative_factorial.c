/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:21:12 by shendric          #+#    #+#             */
/*   Updated: 2018/10/03 12:33:58 by shendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}