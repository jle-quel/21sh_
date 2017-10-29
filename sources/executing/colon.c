/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colon.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:36:24 by jle-quel          #+#    #+#             */
/*   Updated: 2017/10/16 14:31:33 by jle-quel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/sh.h"

/*
*************** PUBLIC *********************************************************
*/

void			colon(t_ast *ast, t_line *line, t_process *process)
{
	executing(ast->left, line, process);
	executing(ast->right, line, process);
}