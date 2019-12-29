/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 17:51:29 by rthai             #+#    #+#             */
/*   Updated: 2019/12/23 14:26:55 by flogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visual_header.h"

int		main(void)
{
	t_texture		texture[4];
	t_total_data	data;

	init_vis(&data, texture);
	vis_load_texture(texture);
	work_window(&data, texture);
	return (0);
}
