/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:00:28 by tatashir          #+#    #+#             */
/*   Updated: 2022/07/05 21:00:44 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int n, int power)
{
	int	x;

	x = n;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (1 < power)
	{
		x *= n;
		power--;
	}
	return (x);
}
