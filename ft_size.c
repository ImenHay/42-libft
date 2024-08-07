/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imhaimou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 22:10:52 by imhaimou          #+#    #+#             */
/*   Updated: 2017/05/09 22:25:16 by imhaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size(char *str, char c)
{
	int size;

	size = 0;
	while (str[size] != '\0' && str[size] != c)
		size++;
	return (size);
}
