/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:58:20 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 16:29:03 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget()
{
	
}

ATarget::ATarget( const ATarget & src )
{
	*this = src;
}
ATarget & ATarget::operator=( const ATarget & rhs )
{
	type = rhs.type;
	return *this;
}

ATarget::~ATarget()
{
	
}

ATarget::ATarget( const std::string & _type ): type(_type) 
{
	
}

void ATarget::getHitBySpell( const ASpell & spell )  const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

const std::string & ATarget::getType() const
{
	return type;
}