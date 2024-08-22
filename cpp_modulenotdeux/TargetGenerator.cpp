/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:01 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 18:56:37 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::TargetGenerator(const TargetGenerator &){}
TargetGenerator & TargetGenerator::operator=(const TargetGenerator &){ return *this; }
	
TargetGenerator::~TargetGenerator()
{
	std::map<const std::string, ATarget *>::iterator it = trg.begin();
	while (it != trg.end())
		delete (it++)->second;
	trg.clear();
	//? del + forget
}

void TargetGenerator::learnTargetType( ATarget * target ) 
{
	if (target)	
		trg.insert(std::make_pair(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType( const std::string & target )
{
	trg.erase(target);
}

ATarget * TargetGenerator::createTarget( const std::string & target)
{
	std::map<const std::string, ATarget *>::iterator it = trg.find(target);	
	if (it != trg.end())
		return it->second;
	return NULL;
}