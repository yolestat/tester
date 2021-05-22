/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lestat <lestat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 07:41:32 by lestat            #+#    #+#             */
/*   Updated: 2021/05/15 11:53:07 by lestat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 48;
	while (i <= 57)
	{
		c = (char)i;
		ft_putchar(c);
		i++;
	}
	write(1, &"\n", 1);
}

void	main(void)
{
	ft_print_numbers();
}
