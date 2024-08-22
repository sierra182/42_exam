/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:56:31 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 16:26:37 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell()
{
	
}

ASpell::ASpell( const ASpell & src )
{
	*this = src;

}
ASpell & ASpell::operator=( const ASpell & rhs )
{
	name = rhs.name;
	effects = rhs.effects;
	return *this;
}

ASpell::~ASpell()
{
	
}

ASpell::ASpell( const std::string & _name, const std::string & _effects )
: name(_name), effects(_effects)
{
	
}

void ASpell::launch( const ATarget & target ) const
{
	target.getHitBySpell(*this);
}

const std::string & ASpell::getName() const
{
	return name;
}

const std::string & ASpell::getEffects() const
{
	return effects;
}