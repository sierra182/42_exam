/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 11:04:44 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget( void )
{
	return ;
}

ATarget::ATarget( const ATarget & src )
{
	*this = src; 
	return ;
}

ATarget & ATarget::operator=( const ATarget & )
{	
	return *this;
}

ATarget::~ATarget( void )
{
	return ;
}

ATarget::ATarget( const std::string & _type )
: type(_type)
{
	return ;
}

const std::string & ATarget::getType( void ) const
{
	return this->type;
}

void ATarget::getHitBySpell(const ASpell & spell) const
{
	std::cout << getType() << " has been " << spell.getEffects() << "!"
		<< std::endl;
}
