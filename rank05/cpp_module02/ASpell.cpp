/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 08:34:06 by seblin           ###   ########.fr       */
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

ASpell & ASpell::operator=( const ASpell & rhs)
{	
	this->name = rhs.name;
	this->effects = rhs.effects;
	return *this;
}

ASpell::~ASpell( void )
{
	return ;
}

const std::string & ASpell::getName( void ) const
{ 
	// std::cout << "GETNAME" << std::endl;
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

void ASpell::launch( const ATarget & target ) const
{
	target.getHitBySpell(*this);
}

