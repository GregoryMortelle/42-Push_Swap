/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 01:37:32 by grmortel          #+#    #+#             */
/*   Updated: 2024/03/28 01:46:34 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*init_stack(void)
{
    t_stack *stack;
	stack = (t_stack *)malloc(sizeof(t_stack));
    if (stack == NULL)
        return (NULL);
    
    stack->top = NULL;
    stack->length = 0;
    return (stack);
}
