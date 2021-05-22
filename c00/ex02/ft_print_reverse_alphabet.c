/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lestat <lestat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:25:19 by lestat            #+#    #+#             */
/*   Updated: 2021/05/15 12:17:19 by lestat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 122;
	while (i >= 97)
	{
		c = (char)i;
		ft_putchar(c);
		i--;
	}
	write(1, &"\n", 1);
}

void	main(void)
{
	ft_print_reverse_alphabet();
}
