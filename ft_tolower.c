/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:07:54 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/16 13:24:11 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
// 	unsigned char c = 'b';
// 	printf("%c\n%c", ft_tolower(c), tolower(c));
// }