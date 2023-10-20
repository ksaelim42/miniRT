/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <ksaelim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:35:17 by ksaelim           #+#    #+#             */
/*   Updated: 2023/10/09 14:40:12 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H
# include <math.h>

typedef struct s_fixvec
{
	int		x;
	int		y;
	int		z;
}	t_fixvec;

typedef struct s_vec
{
	float	x;
	float	y;
	float	z;
}	t_vec;
#endif