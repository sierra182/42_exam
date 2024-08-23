/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell::ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:20:42 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:21:12 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(){}
ASpell::ASpell(const ASpell & src){*this = src;}
ASpell & ASpell::operator=(const ASpell & rhs)
{
    name = rhs.name;
    effects = rhs.effects;
    return *this;
}

ASpell::ASpell( const string  & name, const string & effects)
: name(name), effects(effects){}

ASpell::~ASpell(){}

const string & ASpell::getName() const {return name;}
const string & ASpell::getEffects() const {return effects;}

void ASpell::launch(const ATarget & target) const
{
    target.getHitBySpell(*this);
}