/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:22:01 by taelkhal          #+#    #+#             */
/*   Updated: 2022/09/07 20:58:57 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	while (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			return (1);
		else
		{
			nb = nb * ft_recursive_factorial(nb - 1);
			return (nb);
		}
	}
	return (0);
}
