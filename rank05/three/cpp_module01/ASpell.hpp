/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:10:38 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 10:56:31 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ATarget;
class ASpell
{
	protected:
	
	std::string name;
	std::string effects;
	
	public:
	
	ASpell();
	ASpell( const ASpell & src );
	ASpell & operator=( const ASpell & rhs );
	virtual ~ASpell();
	
	ASpell( const std::string & _name, const std::string & _effects );
	const std::string & getName() const;
	const std::string & getEffects() const;

	virtual ASpell * clone() const = 0;
	
	void launch( const ATarget & target ) const;
};