/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 08:58:15 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ASpell.hpp"
#define SP 5

class SpellBook
{	
	ASpell * spells[SP];

	SpellBook( const SpellBook & );
	SpellBook & operator=( const SpellBook & );
	
	public:
		
		SpellBook( void );
		virtual ~SpellBook( void );

		// SpellBook( const std::string & name, const std::string & effects );
		// const std::string & getName( void ) const;
		// const std::string & getEffects( void ) const;

		// virtual SpellBook * clone( void ) const = 0;
		// void launch( const ATarget & target) const;
		
		void learnSpell( ASpell* );
		void forgetSpell(std::string const &);
	 	ASpell* createSpell(std::string const &);
		// , that COPIES a spell in the book
// * void forgetSpell(string const &), that deletes a spell from the book, except
//   if it isn't there
// * ASpell* createSpell(string const &), that receives a string corresponding to
  //the name of a spell, creates it, and returns it.
	// protected:

	// 	std::string name;
	// 	std::string effects;
};