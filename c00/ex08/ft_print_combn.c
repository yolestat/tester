/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-p <drubio-p@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:44:09 by drubio-p          #+#    #+#             */
/*   Updated: 2021/05/23 18:44:22 by drubio-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
int	ft_putnbr(int nb)
{
	char	cnb[12];
	int		i;

	sprintf(cnb, "%d", nb);
	i = 1;
	while (i <= 11)
	{
		if ((cnb[i] >= '0') && (cnb[i] <= '9'))
		{
			ft_putchar(cnb[i]);
		}
		i++;
	}
	return 0;
}
int ft_bucle(int digitos_max, int inicio)
{
	char	numero_escrito[digitos_max];
	int		deletreo;
	int		limite;
	int		contador_bucle;

	contador_bucle = inicio;
	limite = ((inicio*2)-1);
	deletreo=1;
	while (contador_bucle <= limite)
	{
		ft_putnbr(contador_bucle);
		write(1, &", ", 2);
		contador_bucle++;
		deletreo=1;
	}
	return(0);
}
void ft_print_combn(int digitos_max)
{
	char	inicio_escrito[digitos_max];
	int		contador = 0;
	int		inicio_int;

	inicio_escrito[contador] = '1';
	while (contador++ <= (digitos_max))
	{
		inicio_escrito[contador] = '0';
	}
	inicio_escrito[contador] = '\0';
	sscanf(inicio_escrito, "%d", &inicio_int);
	ft_bucle(digitos_max,inicio_int);
}

int main(void)
{
	int digitos;
	digitos = 1;
	ft_print_combn(digitos-1);
	return(0);
}
