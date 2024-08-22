/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:46:54 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:16:38 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	std::map<std::string, ASpell *> spl;

	SpellBook( const SpellBook & src );
	SpellBook & operator=( const SpellBook & rhs );
	
	public:
	
	SpellBook();
	~SpellBook();

	void learnSpell( ASpell * spell );
	void forgetSpell( const  std::string & spell );
	ASpell * createSpell( const std::string & spell );
};