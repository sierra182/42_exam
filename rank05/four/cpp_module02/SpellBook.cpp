/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:58:28 by svidot            #+#    #+#             */
/*   Updated: 2024/08/24 05:58:05 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::SpellBook(const SpellBook &){}
SpellBook & SpellBook::operator=(const SpellBook &){return *this;}

SpellBook::~SpellBook()
{
    map<string, ASpell*>::iterator it = spl.begin();
    for (; it != spl.end(); it++)    
        delete it->second;      
    spl.clear();          
}

void SpellBook::learnSpell(ASpell * spell)
{
	if (spell)
	{
		map<string, ASpell*>::iterator it = spl.find(spell->getName());
		if (spell && it == spl.end())
			spl.insert(make_pair(spell->getName(), spell->clone()));		
	}
}

void SpellBook::forgetSpell(const string & spell)
{
    map<string, ASpell*>::iterator it = spl.find(spell);
    if (it != spl.end())
    {
        delete it->second;
        spl.erase(spell);          
    }          
}

ASpell * SpellBook::createSpell(string const & spell)
{
    map<string, ASpell*>::iterator it = spl.find(spell);
    if (it != spl.end())
    	return it->second;
	return NULL;
}