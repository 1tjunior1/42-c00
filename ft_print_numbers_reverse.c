/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_reverse.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjair-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:13:46 by tjair-de          #+#    #+#             */
/*   Updated: 2023/09/03 15:21:44 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers_reverse(void)
{
	char c;
	c = '9';
	while(c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
}
int main (void)
{
	ft_print_numbers_reverse();
	return(0);
}

