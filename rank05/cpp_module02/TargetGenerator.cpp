/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:57:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 15:56:31 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include "BrickWall.hpp"
#include "Dummy.hpp"

TargetGenerator::TargetGenerator( void )
{
	for (int i = 0; i < TG; i++)	
		this->targets[i] = NULL;
		
	return ;
}
TargetGenerator::TargetGenerator( const TargetGenerator & )
{
	return ;
}

TargetGenerator & TargetGenerator::operator=( const TargetGenerator & )
{
	return *this;
}

TargetGenerator::~TargetGenerator( void )
{
	return ;
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	for (int i = 0; i < TG; i++)
		if (!this->targets[i])
		{
			this->targets[i] = target;
			break;	
		}
}

void TargetGenerator::forgetTargetType(std::string const & target)
{
	for (int i = 0; i < TG; i++)
		if (this->targets[i] && this->targets[i]->getType() == target)
			this->targets[i] = NULL;
}

ATarget* TargetGenerator::createTarget(std::string const & target)
{
	// ATarget * target_tmp = NULL;
	
	for (int i = 0; i < TG; i++)
		if (this->targets[i] && this->targets[i]->getType() == target)
			return this->targets[i]->clone();
	// if (target == "Dummy")
	// {
	// 	target_tmp = new Dummy();
	// 	// this->learnSpell(new Fwoosh);
		
	// }
	// else if (target == "BrickWall")
	// {
	// 	target_tmp = new BrickWall;
	// 	// this->learnSpell(new Fireball);
	// }
	// return target_tmp;
	return NULL;
}