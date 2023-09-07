/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:52:15 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/03 16:08:45 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}
void	ft_is_negative(int numero)
{
	int	compara;

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
	ft_is_negative('c');
	return(0);

}

