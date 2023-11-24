/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:46:43 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/24 12:12:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/philo.h"

int	main(int c, char **v)
{
	t_in	*in;

	if (c != 5 && c != 6)
		return (ph_err(ERR_ARG));
	if (ph_arg(v))
		return (ph_err(ERR_INV));
	if (ph_rng(v))
		return (ph_err(ERR_RNG));
	in = ph_iin(v);
	return (ph_clr(in, 0));
}
