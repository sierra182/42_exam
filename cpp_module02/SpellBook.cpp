/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:01 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 19:04:10 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::SpellBook(const SpellBook &){}
SpellBook & SpellBook::operator=(const SpellBook &){ return *this; }
	
SpellBook::~SpellBook()
{
	std::map<const std::string, ASpell *>::iterator it = spl.begin();
	while (it != spl.end())
		delete (it++)->second;
	spl.clear();
	//? del + forget
}

void SpellBook::learnSpell( ASpell * spell ) 
{
	if (spell)	
		spl.insert(std::make_pair(spell->getName(), spell->clone()));	
}

void SpellBook::forgetSpell( const std::string & spell )
{
	std::map<const std::string, ASpell *>::iterator it = spl.find(spell);
	if (it != spl.end())
		delete it->second;
	spl.erase(spell);
}

ASpell * SpellBook::createSpell( const std::string & spell)
{
	std::map<const std::string, ASpell *>::iterator it = spl.find(spell);	
	if (it != spl.end())
		return it->second;
	return NULL;
}