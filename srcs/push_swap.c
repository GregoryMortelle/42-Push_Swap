/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:10:06 by grmortel          #+#    #+#             */
/*   Updated: 2024/04/01 05:30:55 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_stack	*s_a;
	t_stack	*s_b;
	char	**split;

	s_a = init_stack();
	s_b = init_stack();

	if (ac == 2)
	{
		split = ft_split(av[1], 32);
		if (!split)
			return (0);
	}
	free_stack(s_a);
	free_stack(s_b);
}
