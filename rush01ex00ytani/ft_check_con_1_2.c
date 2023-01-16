/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_con_1_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:34:59 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:34:59 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_t1_and_d2(int top, int down)
{
	if (top == 1 && down == 2)
		return (2);
	return (0);
}

int	ft_check_t2_and_d1(int top, int down)
{
	if (top == 2 && down == 1)
		return (2);
	return (0);
}

int	ft_check_l1_and_r2(int left, int right)
{
	if (left == 1 && right == 2)
		return (2);
	return (0);
}

int	ft_check_l2_and_r1(int left, int right)
{
	if (left == 2 && right == 1)
		return (2);
	return (0);
}
