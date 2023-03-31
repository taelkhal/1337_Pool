/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:31:43 by taelkhal          #+#    #+#             */
/*   Updated: 2022/08/30 19:52:02 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lowercase(str);
	while (str[i] != '\0')
	{
		while (!((str[i] <= 'z' && str[i] >= 'a' )
				|| (str[i] <= '9' && str[i] >= '0')))
		{
			i++;
		}
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = str[i] - 32;
			i++;
		}
		while (((str[i] <= 'z' && str[i] >= 'a')
				|| (str[i] <= '9' && str[i] >= '0')))
		{
			i++;
		}
	}
	return (str);
}
