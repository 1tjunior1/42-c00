/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:31:00 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/03 14:36:41 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char c;
	c = 'a';
	while(c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
int main (void)
{
	ft_print_alphabet();
	return(0);
}

