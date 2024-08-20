/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 18:32:32 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"
#include "Fireball.hpp"
#include "Fwoosh.hpp"

SpellBook::SpellBook( void )
{	
	for (int i = 0; i < SP; i++)	
		this->spells[i] = NULL;
		
	return ;
}

SpellBook::SpellBook( const SpellBook & src )
{
	*this = src; 
	return ;
}

SpellBook & SpellBook::operator=( const SpellBook & )
{	
	return *this;
}

SpellBook::~SpellBook( void )
{
	for (int i = 0; i < SP; i++)
	{		
		// delete this->spells[i];
		this->spells[i] = NULL;	
	}
	
	return ;
}

void SpellBook::learnSpell( ASpell* spell ) //cpy
{
	if (!spell)
		std::cout << "FAUX" << std::endl;
	for (int i = 0; i < SP; i++)
	if (!this->spells[i])
	{
		this->spells[i] = spell;//->clone();
		break;	
	}
}

void SpellBook::forgetSpell(std::string const & spell) //del ?
{
	for (int i = 0; i < SP; i++)
		if (this->spells[i] && this->spells[i]->getName() == spell)		
		{
			// delete this->spells[i];
			this->spells[i] = NULL;	
		}
}

ASpell* SpellBook::createSpell(std::string const & spell)
{
	// ASpell * spell_tmp = NULL;
	
	// if (spell == "Fwoosh")
	// {
	// 	spell_tmp = new Fwoosh();
	// 	// this->learnSpell(new Fwoosh);
		
	// }
	// else if (spell == "Fireball")
	// {
	// 	spell_tmp = new Fireball;
	// 	// this->learnSpell(new Fireball);
	// }
// std::cout << "CREATE SPELL" << std::endl;
	for (int i = 0; i < SP; i++)
	{		
		//std::cout << "WHATT" << std::endl;
		if (this->spells[i] && this->spells[i]->getName() == spell)
		{
		// std::cout << "FINDED" << std::endl;
			return this->spells[i]->clone();
		}
	}
	// std::cout << "CREATE SPELL NULL" << std::endl;		
	return NULL;
	// return spell_tmp;
}
// void  SpellBook::launchSpell( std::string spell, const ATarget & target )
// {
// 	for (int i = 0; i < SP; i++)
// 		if (this->spells[i] && this->spells[i]->getName() == spell)
// 			target.getHitBySpell(*this->spells[i]);
// }
// const std::string & SpellBook::getName( void ) const
// {
// 	return this->name;
// }
		
// const std::string & SpellBook::getEffects( void ) const
// {
// 	return this->effects;
// }

// SpellBook::SpellBook( const std::string & _name, const std::string & _effects )
// : name(_name), effects(_effects)
// {
// 	return ;
// }

// void SpellBook::launch( const ATarget & target ) const
// {
// 	target.getHitBySpell(*this);
// }

