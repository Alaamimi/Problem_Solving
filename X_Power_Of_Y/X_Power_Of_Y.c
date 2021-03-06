/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   X_Power_Of_Y.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:09:47 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/12 20:28:29 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	power(int x, int y)
{
	
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * power(x, y-1));
	else
		return (1);
}

int	main(void)
{
	int x;
	int y;

	printf("Please enter the values of x and y : \n");
	scanf("%d %d", &x, &y);
	printf("%d\n", power(x, y));
	return (0);
}
