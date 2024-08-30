/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:58:28 by svidot            #+#    #+#             */
/*   Updated: 2024/08/24 06:45:12 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){}
Warlock::Warlock(const Warlock &){}
Warlock & Warlock::operator=(const Warlock &){return *this;}

Warlock::Warlock( const string  & name, const string & title)
: name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;       
}

const string & Warlock::getName() const {return name;}
const string & Warlock::getTitle() const {return title;}
void Warlock::setTitle(const string & title) {this->title = title;}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell)
{
	sb.learnSpell(spell);
}

void Warlock::forgetSpell(string spell)
{
   sb.forgetSpell(spell);         
}

void Warlock::launchSpell(string spell, const ATarget & target)
{
   ASpell * tmp = sb.createSpell(spell);
   if (tmp)
		tmp->launch(target);   
}