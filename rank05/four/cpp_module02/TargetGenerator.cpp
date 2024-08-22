/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:53:07 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:19:47 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include <utility>

TargetGenerator::TargetGenerator(){}
TargetGenerator::TargetGenerator( const TargetGenerator & ){}
TargetGenerator & TargetGenerator::operator=( const TargetGenerator & ){return *this;}


TargetGenerator::~TargetGenerator()
{

}

void TargetGenerator::learnTargetType( ATarget * spell )
{
	if (spell)
		this->spl.insert(make_pair(spell->getType(), spell));
}

void TargetGenerator::forgetTargetType( const std::string & spell )
{
	this->spl.erase(spell);
}

ATarget * TargetGenerator::createTarget( const std::string & spell )
{
	std::map<std::string, ATarget *>::iterator it = spl.find(spell);
	if ( it != spl.end())
		return it->second;
	return NULL;
}