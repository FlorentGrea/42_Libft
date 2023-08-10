/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:10:35 by fgrea             #+#    #+#             */
/*   Updated: 2021/11/09 18:10:36 by fgrea            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

void	ft_flag_zero(t_flags flags)
{
	while (flags.zero-- > 0)
		ft_putchar_fd('0', 1);
}
