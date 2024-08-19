/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/19 17:57:17 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fwoosh
{
	public:

		Fwoosh( void );
		Fwoosh( const Fwoosh & );
		Fwoosh & operator=( const Fwoosh & );
		virtual ~Fwoosh( void );
};