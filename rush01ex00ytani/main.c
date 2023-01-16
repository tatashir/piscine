/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:07:11 by yichinos          #+#    #+#             */
/*   Updated: 2022/06/26 20:46:15 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_flag;

void	ft_table(int num[16]);

void	ft_error(void)
{
	write(2, "Error\n", 6);
	g_flag = 1;
}

void	error_number(int a)
{
	if (a > 5 || a < 0)
		ft_error();
}

int	input_number(int argc, char **argv, int *num)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	if (argc != 2)
	{
		ft_error();
		flag = 1;
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ')
			{
				num[i / 2] = argv[1][i] - '0';
				error_number(num[i / 2]);
			}
			i++;
		}
	}
	return (flag);
}

int	main(int argc, char *argv[])
{
	int	num[16];

	input_number(argc, argv, num);
	ft_table(num);
	return (0);
}
