/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdursun <sdursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:30:20 by sdursun           #+#    #+#             */
/*   Updated: 2023/01/16 18:08:10 by sdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	k;

	k = n;
	if (k > 2147483647 || k < -2147483648)
		return ;
	if (k < 0)
	{
		k = k * -1;
		ft_putchar_fd('-', fd);
	}
	if (k >= 10)
	{
		ft_putnbr_fd(k / 10, fd);
		k = k % 10;
	}
	if (k < 10)
	{
		ft_putchar_fd((k + '0'), fd);
	}
}
