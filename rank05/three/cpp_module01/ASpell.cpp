/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:28:17 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:24:56 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(){};

ASpell::ASpell( const ASpell & src ){*this = src;}

ASpell & ASpell::operator=( const ASpell & rhs )
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return *this;
}

ASpell::~ASpell(){}

ASpell::ASpell( const std::string & _name, const std::string & _effects )
: name(_name), effects(_effects)
{}

void ASpell::launch( const ATarget & target ) const
{
	target.getHitBySpell(*this);
}

const std::string & ASpell::getName() const
{
	return this->name;
}

const std::string & ASpell::getEffects() const
{
	return this->effects;
}







