/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:58:05 by grmortel          #+#    #+#             */
/*   Updated: 2023/10/19 16:41:23 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	list = list->next;
	tmp->next = tmp->next->next;
	list->next = tmp;
}

void	ft_sa(t_list *list)
{
	ft_swap(list);
	ft_printf("sa\n");
}

void	ft_sb(t_list *list)
{
	ft_swap(list);
	ft_printf("sb\n");
}



void	ft_ss(t_list *list)
{
	ft_swap(list);
	ft_swap(list);
	ft_printf("ss\n");
}
