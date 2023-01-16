/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_con_1_4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:37:30 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:37:30 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_t1_and_d4(int top, int down)
{
	if (top == 1 && down == 4)
		return (4);
	return (0);
}

int	ft_check_t4_and_d1(int top, int down)
{
	if (top == 4 && down == 1)
		return (4);
	return (0);
}

int	ft_check_l1_and_r4(int left, int right)
{
	if (left == 1 && right == 4)
		return (4);
	return (0);
}

int	ft_check_l4_and_r1(int left, int right)
{
	if (left == 4 && right == 1)
		return (4);
	return (0);
}
