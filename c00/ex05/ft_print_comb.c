/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lestat <lestat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 19:12:27 by lestat            #+#    #+#             */
/*   Updated: 2021/05/16 19:12:57 by lestat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char		h;
	char		t;
	char		u;

	h = 47;
	t = 47;
	u = 47;
	while (h++ <= 54)
	{
		while (t++ <= 55)
		{
			while (u++ <= 56)
			{
				if (((u != t) && (t != h)) && (u != h))
				{
					ft_putchar(h);
					ft_putchar(t);
					ft_putchar(u);
					write(1, &", ", 2);
				}
			}
			u = 47;
		}
		t = 47;
	}
}

void	main(void)
{
	ft_print_comb();
}
