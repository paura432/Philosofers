/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos <pramos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:06:05 by pramos            #+#    #+#             */
/*   Updated: 2023/11/27 22:17:47 by pramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_list(t_data_ph *philo)
{
	while(philo != NULL)
	{
		printf("%i\n", philo->id);
		philo = philo->next;
	}
}

int main(int ac, char **av)
{
	t_data data;
	t_data_ph *philo;
	int i;

	i = 3;
	philo = NULL;
	init(&data, &philo, av, ac);
	print_list(philo);
    return (0);
}

