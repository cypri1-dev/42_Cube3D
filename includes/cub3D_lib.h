/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D_lib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:20:45 by cyferrei          #+#    #+#             */
/*   Updated: 2024/09/03 13:29:14 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_LIB_H
# define CUB3D_LIB_H

/*all includes*/

# include "../minilibx-linux/mlx.h"
# include "../minilibx-linux/mlx_int.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>

/*all defines*/

# define PI 3.14159265359
# define MAP_WIDTH 6
# define MAP_HEIGHT 5
# define NUM_RAYS 100
# define g_value 10
# define w_value 10

/*all structures*/

typedef struct s_player
{
	int fov;
	int distance;
	int angle;
	int radians;
}				t_player;

typedef struct s_data
{
	t_player player;
	int wall;
	int ground;
}				t_data;

#endif