/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybiammy_brain_is_a_milkshake <mybiammy    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:47:07 by mybiammy_br       #+#    #+#             */
/*   Updated: 2023/02/17 16:11:12 by mybiammy_br      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	if (n >= 0)
		write(1, &p, 1);
	else
		write(1, &n, 1);
}
