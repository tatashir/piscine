/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:05:29 by tatashir          #+#    #+#             */
/*   Updated: 2022/07/06 15:09:38 by tatashir         ###   ########.fr       */
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

int	ft_find_next_prime(int n)
{
	while (n < 2147483647 && !ft_is_prime(n))
		n++;
	return (n);
}
