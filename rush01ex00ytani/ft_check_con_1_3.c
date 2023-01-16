/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_con_1_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:37:01 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:37:01 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_t1_and_d3(int top, int down)
{
	if (top == 1 && down == 3)
		return (1);
	return (0);
}

int	ft_check_t3_and_d1(int top, int down)
{
	if (top == 3 && down == 1)
		return (1);
	return (0);
}

int	ft_check_l1_and_r3(int left, int right)
{
	if (left == 1 && right == 3)
		return (1);
	return (0);
}

int	ft_check_l3_and_r1(int left, int right)
{
	if (left == 2 && right == 1)
		return (1);
	return (0);
}
