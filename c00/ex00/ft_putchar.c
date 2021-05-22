/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lestat <lestat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:32:17 by lestat            #+#    #+#             */
/*   Updated: 2021/05/15 12:17:15 by lestat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* despues creamos la funcion ft_putchar con el char c que recive*/
char ft_putchar(char c)
{
	/*esto muestra c en pantalla para imprimirlo se reserva un espacion de memoria */
	write(1, &c, 1);
}
