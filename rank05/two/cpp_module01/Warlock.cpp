/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:01 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 16:50:39 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string & _name, const std::string & _title)
: name(_name), title(_title)
{
	std::cout << name << ": This looks like another boring day." <<std::endl;	
}

Warlock::Warlock(){}
Warlock::Warlock(const Warlock &){}
Warlock & Warlock::operator=(const Warlock &){ return *this; }		
Warlock::~Warlock()
{ std::cout << name << ": My job here is done!" <<std::endl; }

const std::string & Warlock::getName() const {return this->name;}
const std::string & Warlock::getTitle() const {return this->title;}
void Warlock::setTitle(const std::string & _title) {this->title = _title;}

void Warlock::introduce() const
{ std::cout << name << ": I am " << name << ", " << title << "!" <<std::endl; }

void Warlock::learnSpell( ASpell * spell )
{
	spl.insert(std::make_pair(spell->getName(), spell));
}
void Warlock::forgetSpell( std::string spell )
{
	spl.erase(spell);
}

void Warlock::launchSpell( std::string spell, const ATarget & target)
{
	std::map<const std::string, ASpell *>::iterator it = spl.find(spell);//? ref str
	if (it != spl.end())
		(*it).second->launch(target);	
}