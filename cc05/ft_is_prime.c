/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:26:32 by tatashir          #+#    #+#             */
/*   Updated: 2022/07/07 12:28:00 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	x;

	x = 2;
	if (n < 2)
		return (0);
	while (x <= n / 2)
	{
		if (n % x == 0)
			return (0);
		x++;
	}
	return (1);
}