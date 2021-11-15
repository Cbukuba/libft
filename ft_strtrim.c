/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:23:32 by cbukuba           #+#    #+#             */
/*   Updated: 2021/11/15 12:49:11 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		t;
	char	*str;

	i = ft_strlen(set);
	j = 0;
	t = ft_strlen(s1) - (2 * i);
	str = malloc(sizeof(char) * (ft_strlen(s1) - (2 * i)));
	if (!str)
		return (NULL);
	while (j <= (t - 1))
	{
		str[j] = s1[j + i];
		j ++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char	*str = "\nWassup\n";
// 	char	*set = "\n";

// 	printf("original :%s\nStrtrim :%s", str, ft_strtrim(str, set));
// }