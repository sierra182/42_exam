/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:58:28 by svidot            #+#    #+#             */
/*   Updated: 2024/08/24 05:58:05 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::TargetGenerator(const TargetGenerator &){}
TargetGenerator & TargetGenerator::operator=(const TargetGenerator &){return *this;}

TargetGenerator::~TargetGenerator()
{
    // map<string, ATarget*>::iterator it = spl.begin();
    // for (; it != spl.end(); it++)    
    //     delete it->second;      
    // spl.clear();          
}

void TargetGenerator::learnTargetType(ATarget * spell)
{
	if (spell)
	{
		map<string, ATarget*>::iterator it = spl.find(spell->getType());
		if (spell && it == spl.end())
			spl.insert(make_pair(spell->getType(), spell));//->clone()));		
	}
}

void TargetGenerator::forgetTargetType(const string & spell)
{
    map<string, ATarget*>::iterator it = spl.find(spell);
    if (it != spl.end())
    {
        // delete it->second;
        spl.erase(spell);          
    }          
}

ATarget * TargetGenerator::createTarget(string const & spell)
{
    map<string, ATarget*>::iterator it = spl.find(spell);
    if (it != spl.end())
       return it->second;
	return NULL;
}