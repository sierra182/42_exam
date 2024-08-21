/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 08:37:45 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph( void ) : ASpell("Polymorph", "turned into a critter")
{
	return ;
}

Polymorph::Polymorph( const Polymorph & src ): ASpell(src)
{
	*this = src; 
	return ;
}

Polymorph & Polymorph::operator=( const Polymorph & )
{	
	return *this;
}

Polymorph::~Polymorph( void )
{
	return ;
}

ASpell * Polymorph::clone( void ) const
{
	return new Polymorph();//!()
}