/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:57:14 by medalgic          #+#    #+#             */
/*   Updated: 2023/11/14 18:15:12 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "unistd.h"

void	ss(t_stack	*stack, int print)
{
	int	tmp;

	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (!print)
		write(1, "ss\n", 3);
}

void	rr(t_stack	*stack, int print)
{
	int	tmp;
	int	index;

	index = 0;
	tmp = stack->a[index];
	while (++index < stack->size_a)
		stack->a[index - 1] = stack->a[index];
	stack->a[index - 1] = tmp;
	index = 0;
	tmp = stack->b[index];
	while (++index < stack->size_b)
		stack->b[index - 1] = stack->b[index];
	stack->b[index - 1] = tmp;
	if (!print)
		write(1, "rr\n", 3);
}

void	rrr(t_stack *stack, int print)
{
	register int	tmp;
	register int	index;

	index = stack->size_a - 1;
	tmp = stack->a[index];
	while (index)
	{
		stack->a[index] = stack->a[index - 1];
		index--;
	}
	stack->a[index] = tmp;
	index = stack->size_b - 1;
	tmp = stack->b[index];
	while (index--)
		stack->b[index] = stack->b[index - 1];
	stack->b[index] = tmp;
	if (!print)
		write(1, "rrr\n", 4);
}
