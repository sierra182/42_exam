/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:53:07 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:19:47 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"
#include <utility>

SpellBook::SpellBook(){}
SpellBook::SpellBook( const SpellBook & ){}
SpellBook & SpellBook::operator=( const SpellBook & ){return *this;}


SpellBook::~SpellBook()
{

}

void SpellBook::learnSpell( ASpell * spell )
{
	if (spell)
		this->spl.insert(make_pair(spell->getName(), spell));
}

void SpellBook::forgetSpell( const std::string & spell )
{
	this->spl.erase(spell);
}

ASpell * SpellBook::createSpell( const std::string & spell )
{
	std::map<std::string, ASpell *>::iterator it = spl.find(spell);
	if ( it != spl.end())
		return it->second;
	return NULL;
}