/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:06 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 09:03:32 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{	
	SpellBook sbook;	
	
	std::string name;
	std::string title;
	
	Warlock();
	Warlock(const Warlock &);
	Warlock & operator=(const Warlock &);
	
	public:

	Warlock(const std::string & _name, const std::string & _title);	
		
	virtual ~Warlock();	
	
	const std::string & getName() const;
	const std::string & getTitle() const;
	void setTitle(const std::string & _title);
	
	void introduce() const;
	
	void learnSpell( ASpell * spell );
	void forgetSpell( std::string spell );
	void launchSpell( std::string spell, const ATarget & target );
};