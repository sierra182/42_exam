/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:53:07 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 12:51:19 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <utility>

Warlock::Warlock(){}
Warlock::Warlock( const Warlock & ){}
Warlock & Warlock::operator=( const Warlock & ){return *this;}


Warlock::Warlock( const std::string & _name, const std::string & _title )
: name(_name), title(_title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string & Warlock::getName() const
{
	return this->name;
}

const std::string & Warlock::getTitle() const
{
	return this->title;	
}

void Warlock::setTitle( const std::string & _title )
{
	this->title = _title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell( ASpell * spell )
{
	spl.learnSpell(spell);
}

void Warlock::forgetSpell( std::string spell )
{
	spl.forgetSpell(spell);
}

void Warlock::launchSpell( std::string spell, const ATarget & target)
{
	ASpell * tmp = spl.createSpell(spell);
	if (tmp)
		tmp->launch(target);	
}