/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:08:35 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/22 13:02:12 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void test(int *option, int argc)
{
	int i = 0;
	while (i < argc - 1)
	{
		printf("%i\n", option[i]);
		i++;
	}
}