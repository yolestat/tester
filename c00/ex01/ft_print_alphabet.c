/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lestat <lestat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:25:19 by lestat            #+#    #+#             */
/*   Updated: 2021/05/15 12:17:26 by lestat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 97;
	while (i <= 122)
	{
		c = (char)i;
		ft_putchar(c);
		i++;
	}
	write(1, &"\n", 1);
	
}

int	main(void)
{
	ft_print_alphabet();
	return 0;
}
