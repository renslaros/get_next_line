/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/04 20:48:49 by rlaros         #+#    #+#                */
/*   Updated: 2019/02/04 20:49:03 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Swap the values of a and b.
*/

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}