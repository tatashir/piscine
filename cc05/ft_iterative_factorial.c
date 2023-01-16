/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:02:52 by tatashir          #+#    #+#             */
/*   Updated: 2022/07/05 14:38:37 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int	x;

	x = 1;
	if (n < 0)
		return (0);
	if (n <= 1)
		return (1);
	while (0 < n)
	{
		x *= n;
		n--;
	}
	return (x);
}