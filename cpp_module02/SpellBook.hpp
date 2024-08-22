/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:06 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 18:37:24 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	std::map<const std::string, ASpell *> spl;
		
	SpellBook(const SpellBook &);
	SpellBook & operator=(const SpellBook &);
	
	public:

	SpellBook();		
	virtual ~SpellBook();	
		
	void learnSpell( ASpell * spell );
	void forgetSpell( const std::string & spell );
	ASpell * createSpell( const std::string & spell );
};