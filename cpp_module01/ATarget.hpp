/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:56:14 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 16:28:54 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ASpell;
class ATarget
{
	std::string type;
	
	public:

	ATarget();
	ATarget( const ATarget & src );
	ATarget & operator=( const ATarget & rhs );
	virtual ~ATarget();

	ATarget( const std::string & type );
	virtual ATarget * clone() const = 0;
	void getHitBySpell( const ASpell & spell) const;
	const std::string & getType() const;
};