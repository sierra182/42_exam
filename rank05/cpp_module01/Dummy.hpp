/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 10:14:59 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:

		Dummy( void );
		Dummy( const Dummy & );
		Dummy & operator=( const Dummy & );
		virtual ~Dummy( void );

		virtual ATarget * clone( void ) const;
};