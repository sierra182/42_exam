/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:46:49 by svidot            #+#    #+#             */
/*   Updated: 2024/08/20 12:08:20 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( void )
{  	
    return ;
}

Warlock::Warlock( const Warlock & src )
{
    (void) src;
    return ;
}

Warlock::Warlock( const std::string & _name, const std::string & _title )
    :name(_name), title(_title)
{
    std::cout << this->name << ": This looks like another boring day." 
        << std::endl;
	
	for (int i = 0; i < SP; i++)	
		this->spells[i] = NULL;
    return ;   
}
  
Warlock & Warlock::operator=( const Warlock & rhs )
{
    (void) rhs;        
    return *this;
}

Warlock::~Warlock( void )
{
    std::cout << this->name << ": My job here is done!" << std::endl;

    return ;
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
    std::cout << this->name << ": I am " << this->name << ", "
        << this->title << "!" << std::endl;
}

void  Warlock::learnSpell( ASpell * spell )
{
	for (int i = 0; i < SP; i++)
		if (!this->spells[i])
		{
			this->spells[i] = spell;
			break;	
		}
}

void  Warlock::forgetSpell( std::string spell )
{
	for (int i = 0; i < SP; i++)
		if (this->spells[i] && this->spells[i]->getName() == spell)		
			this->spells[i] = NULL;		
}

void  Warlock::launchSpell( std::string spell, const ATarget & target )
{
	for (int i = 0; i < SP; i++)
		if (this->spells[i] && this->spells[i]->getName() == spell)
			target.getHitBySpell(*this->spells[i]);
}