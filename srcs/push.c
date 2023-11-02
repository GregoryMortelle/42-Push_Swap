/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:20:42 by grmortel          #+#    #+#             */
/*   Updated: 2023/11/02 14:02:37 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pa(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_b;
	tmp->next = NULL;
	ft_lstadd_front(list_a, tmp);
	ft_printf("pa\n");
}

void	ft_pb(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_a;
	tmp->next = NULL;
	ft_lstadd_front(list_b, tmp);
	ft_printf("pb\n");
}
