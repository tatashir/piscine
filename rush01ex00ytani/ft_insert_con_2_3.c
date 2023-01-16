/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_con_2_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:39:48 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:39:48 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_t2_and_d3(int top, int down);
int	ft_check_t3_and_d2(int top, int down);
int	ft_check_l2_and_r3(int left, int right);
int	ft_check_l3_and_r2(int left, int right);

void	ft_insert_t2_and_d3(int top, int down, int x, int result[6][6])
{
	if (ft_check_t2_and_d3(top, down) == 1)
	{
		result[x][2] = 4;
	}
}

void	ft_insert_t3_and_d2(int top, int down, int x, int result[6][6])
{
	if (ft_check_t3_and_d2(top, down) == 1)
	{
		result[x][3] = 4;
	}
}

void	ft_insert_l2_and_r3(int left, int right, int y, int result[6][6])
{
	if (ft_check_l2_and_r3(left, right) == 1)
	{
		result[2][y] = 4;
	}
}

void	ft_insert_l3_and_r2(int left, int right, int y, int result[6][6])
{
	if (ft_check_l3_and_r2(left, right) == 1)
	{
		result[3][y] = 4;
	}
}
