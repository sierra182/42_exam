/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 10:55:44 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell( void )
{
	return ;
}

ASpell::ASpell( const ASpell & src )
{
	*this = src; 
	return ;
}

ASpell & ASpell::operator=( const ASpell & )
{	
	return *this;
}

ASpell::~ASpell( void )
{
	return ;
}

const std::string & ASpell::getName( void ) const
{
	return this->name;
}
		
const std::string & ASpell::getEffects( void ) const
{
	return this->effects;
}

ASpell::ASpell( const std::string & _name, const std::string & _effects )
: name(_name), effects(_effects)
{
	return ;
}

void ASpell::launch( const ATarget & target) const
{
	target.getHitBySpell(const_cast<const ASpell &>(*this));
}

