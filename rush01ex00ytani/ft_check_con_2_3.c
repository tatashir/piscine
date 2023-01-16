/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_con_2_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:37:39 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:37:39 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_t2_and_d3(int top, int down)
{
	if (top == 2 && down == 3)
		return (1);
	return (0);
}

int	ft_check_t3_and_d2(int top, int down)
{
	if (top == 3 && down == 2)
		return (1);
	return (0);
}

int	ft_check_l2_and_r3(int left, int right)
{
	if (left == 2 && right == 3)
		return (1);
	return (0);
}

int	ft_check_l3_and_r2(int left, int right)
{
	if (left == 3 && right == 2)
		return (1);
	return (0);
}
