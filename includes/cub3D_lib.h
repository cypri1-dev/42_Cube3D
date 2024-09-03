/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D_lib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:20:45 by cyferrei          #+#    #+#             */
/*   Updated: 2024/09/03 16:26:24 by cyferrei         ###   ########.fr       */
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

# define ZERO_INIT 0
# define NULL_INIT NULL
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

/*strings functions prototypes*/

int			ft_strlen(char *str);
char		*ft_strrchr(const char *str, int searchedChar);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
char		*ft_itoa(int nbr);
char		*ft_strdup(const char *s);
char		*ft_strchr(const char *s, int c);
void		ft_putnbr_fd(int n, int fd);
char		**ft_split(char const *s, char c);
char		*ft_strstr(char *haystack, char *needle);

/*parsing function*/

void	checker(int argc, char **argv, char **envp);
void	check_envp(char **envp);
void	check_nb_args(int argc);
void	check_extension(char **argv);
int	ft_count_dot(char *argv, char c);

#endif