/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:36:42 by taelkhal          #+#    #+#             */
/*   Updated: 2022/08/28 18:38:02 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (i < size - 1)
	{
		swp = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = swp;
		i++;
		size--;
	}
}
