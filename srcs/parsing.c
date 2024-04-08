/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 01:38:16 by grmortel          #+#    #+#             */
/*   Updated: 2024/04/09 00:47:45 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap"

int	check_stack(t_stack *stack_a, int i)
{
	t_node *curent;

	current = stack_a->head;
	while(current)
	{
		if (current->value == i)
			return (1);
		current = current->next;
	}
	return (0);
}

void	stack_is_valid(t_stack *stack_a)
{
	t_node *current;
	t_node *next;

	current = stack_a->head;
	while (current->next)
	{
		next = current->next;
		if (current->value == next->value)
			write(2, "Error\n", 6);
		current = current->next;
	}
}
