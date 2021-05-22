/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-p <drubio-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:16:44 by lestat            #+#    #+#             */
/*   Updated: 2021/05/22 13:56:32 by drubio-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_print(char c0, char c1, char c2, char c3)
{
	write(1, &c0, 1);
	write(1, &c1, 1);
	write(1, &" ", 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	write(1, &", ", 2);
	return 0;
}

void	ft_print_comb2(void)
{
	int indice;
    char	cnb[6];
    
    indice = 10000;
    while (indice <= 19999)
	{
        sprintf(cnb, "%d", indice);
	    ft_print((cnb[1]), (cnb[2]), (cnb[3]), (cnb[4]));
        indice++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return 0;
}
