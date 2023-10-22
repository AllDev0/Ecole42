/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: androiddev <androiddev@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:50:47 by androiddev        #+#    #+#             */
/*   Updated: 2023/10/21 19:50:49 by androiddev       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) dest;
	while (n--)
		*ptr++ = (unsigned char) c;
	return (dest);
}
