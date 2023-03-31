/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:16:19 by taelkhal          #+#    #+#             */
/*   Updated: 2022/08/25 17:18:15 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	a;
	char	b;

	i = '0';
	while (i <= '7')
	{
		a = i + 1;
		while (a <= '8')
		{
			b = a + 1;
			while (b <= '9')
			{
				ft_putchar(i);
				ft_putchar(a);
				ft_putchar(b);
				if (i != '7')
					write (1, ", ", 2);
				b++;
			}
			a++;
		}
		i++;
	}
}
