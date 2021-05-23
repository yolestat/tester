#include <stdio.h>
#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
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
		sprintf(numero_escrito, "%d", contador_bucle);
		while (deletreo <= digitos_max)
		{
			ft_putchar(numero_escrito[deletreo]);
			deletreo++;
		}
		write(1, &", ", 2);
		contador_bucle++;
		deletreo=1;
	}
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
	sscanf(inicio_escrito, "%d", &inicio_int);
	ft_bucle(digitos_max,inicio_int);
}

int main(void)
{
	int digitos;
	digitos = 2;
	ft_print_combn(digitos);
}
