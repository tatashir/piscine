/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_con_1_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:39:22 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:39:22 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_t1_and_d3(int top, int down);
int	ft_check_t3_and_d1(int top, int down);
int	ft_check_l1_and_r3(int left, int right);
int	ft_check_l3_and_r1(int left, int right);

void	ft_insert_t1_and_d3(int top, int down, int x, int result[6][6])
{
	if (ft_check_t1_and_d3(top, down) == 1)
	{
		result[x][1] = 4;
	}
}

void	ft_insert_t3_and_d1(int top, int down, int x, int result[6][6])
{
	if (ft_check_t3_and_d1(top, down) == 1)
	{
		result[x][4] = 4;
	}
}

void	ft_insert_l1_and_r3(int left, int right, int y, int result[6][6])
{
	if (ft_check_l1_and_r3(left, right) == 1)
	{
		result[1][y] = 4;
	}
}

void	ft_insert_l3_and_r1(int left, int right, int y, int result[6][6])
{
	if (ft_check_l3_and_r1(left, right) == 1)
	{
		result[4][y] = 4;
	}
}
