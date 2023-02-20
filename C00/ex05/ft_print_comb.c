/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybiammy_brain_is_a_milkshake <mybiammy    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:15:52 by mybiammy_br       #+#    #+#             */
/*   Updated: 2023/02/17 16:08:10 by mybiammy_br      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_write(char n_1, char n_2, char n_3);

void	ft_print_comb(void)
{
	char	n_1;
	char	n_2;
	char	n_3;

	n_1 = '0';
	while (n_1 <= '7')
	{	
		n_2 = n_1 + 1;
		while (n_2 <= '8')
		{
			n_3 = n_2 + 1;
			while (n_3 <= '9')
			{
				ft_write(n_1, n_2, n_3);
				n_3++;
			}
			n_2++;
		}
		n_1++;
	}		
}

void	ft_write(char n_1, char n_2, char n_3)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &n_1, 1);
	write(1, &n_2, 1);
	write(1, &n_3, 1);
	if (n_1 != '7' || n_2 != '8' || n_3 != '9')
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}
