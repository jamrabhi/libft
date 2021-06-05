/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamrabhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 22:54:01 by jamrabhi          #+#    #+#             */
/*   Updated: 2021/06/05 19:50:42 by jamrabhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb_cpy;

	nb_cpy = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb_cpy = n * -1;
	}
	if (nb_cpy >= 0 && nb_cpy <= 9)
		ft_putchar_fd(nb_cpy + '0', fd);
	if (nb_cpy > 9)
	{
		ft_putnbr_fd(nb_cpy / 10, fd);
		ft_putnbr_fd(nb_cpy % 10, fd);
	}
}
