/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 05:15:41 by grmortel          #+#    #+#             */
/*   Updated: 2024/04/09 00:44:06 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node *head_stack;
	t_node	*next;

	t_node head_stack = stack->top;
	while (head_stack)
	{
		next = head_stack->next;
		free(head_stack);
		head_stack = next;
	}
	free(stack);
}
