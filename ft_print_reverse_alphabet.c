/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:40:40 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/03 14:45:34 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';
	while(c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
int main (void)
{
	ft_print_reverse_alphabet();
	return(0);

}


