/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quel <jle-quel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 23:19:56 by jle-quel          #+#    #+#             */
/*   Updated: 2017/11/06 21:14:16 by jle-quel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
*************** PUBLIC *********************************************************
*/

void			ft_arraydel(char ***array)
{
	size_t		index;

	if (*array)
	{
		index = 0;
		while ((*array)[index])
		{
			ft_memdel((void **)&(*array)[index]);
			index++;
		}
		ft_memdel((void **)array);
	}
}
