/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 07:56:29 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ATarget.hpp"

class ASpell
{	
	public:

		ASpell( void );
		ASpell( const ASpell & );
		ASpell & operator=( const ASpell & );
		virtual ~ASpell( void );

		ASpell( const std::string & name, const std::string & effects );
		const std::string & getName( void ) const;
		const std::string & getEffects( void ) const;

		virtual ASpell * clone( void ) const = 0;
		void launch( const ATarget & target) const;

	// protected://!
	private:
		std::string name;
		std::string effects;
};