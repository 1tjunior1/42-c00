/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_positive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:45:14 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/03 18:55:51 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_is_negative(int numero)
{
	int	 compara;

	compara = numero;
	if (compara < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
int main (void)
{
	ft_is_negative('0');
	return(0);

}
