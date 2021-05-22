/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lestat <lestat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:51:57 by lestat            #+#    #+#             */
/*   Updated: 2021/05/15 12:15:15 by lestat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	char c ;

	if (n >= 0 )
	{
		c ='P';
		ft_putchar(c);
	}
	else
	{
		ft_putchar('N');
	}
	write(1, &"\n", 1);
}

void	main(void)
{
	int	i;

	i = -2;
	ft_is_negative(i);
}


