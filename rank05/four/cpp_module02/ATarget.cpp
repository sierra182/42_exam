/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget::ATarget.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:20:42 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:21:12 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(){}
ATarget::ATarget(const ATarget & src){*this = src;}
ATarget & ATarget::operator=(const ATarget & rhs)
{
    type = rhs.type;
    return *this;
}

ATarget::ATarget( const string & type)
: type(type){}

ATarget::~ATarget(){}

const string & ATarget::getType() const {return type;}

void ATarget::getHitBySpell(const ASpell & spell) const 
{    
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}