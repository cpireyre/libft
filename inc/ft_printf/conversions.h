/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpireyre <cpireyre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:27:21 by cpireyre          #+#    #+#             */
/*   Updated: 2019/06/22 17:11:09 by cpireyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

# include "ft_printf.h"

typedef	struct	s_conv
{
	char	letter;
	void	(*conversion)(t_printf *);
}				t_conv;

t_conv g_conversions[NBR_CONVERSIONS];

/*
** d + i, c. int conversions.
*/

void			signed_dec(t_printf *arg);
void			unichar(t_printf *arg);

/*
 ** o, u, x, X. unsigned int conversions.
*/

void			u_octal(t_printf *arg);
void			u_dec(t_printf *arg);
void			u_hex_low(t_printf *arg);
void			u_hex_upp(t_printf *arg);

/*
** D, O, U. long int conversions.
** I will use these to handle ld, lo, lu, etc. by casting
** arg to long int and calling the following functions. Maybe.
*/

void			l_signed_dec(t_printf *arg);
void			l_u_octal(t_printf *arg);
void			l_u_dec(t_printf *arg);

/*
**  s. const char * conversion.
*/

void			string(t_printf *arg);

/*
** C, S. wint_t and wchar_t * conversions.
*/

void			mb_char(t_printf *arg);
void			mb_string(t_printf *arg);

/*
** p. pointer conversion. similar to %#x.
*/

void			ptr_addr(t_printf *arg);

void			integer_conversion(t_printf *a);

#endif
