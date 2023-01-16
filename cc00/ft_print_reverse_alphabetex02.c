/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 21:17:37 by tatashir          #+#    #+#             */
/*   Updated: 2022/06/28 16:12:41 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet( void )
{
	char	hensuu;

	hensuu = 'z';
	while (hensuu >= 'a')
	{
		write(1, &hensuu, 1);
		hensuu--;
	}
}
