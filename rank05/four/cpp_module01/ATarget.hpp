/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:10:38 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 10:53:07 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ASpell;
class ATarget
{
	protected:
	
	std::string type;
	
	public:
	
	ATarget();
	ATarget( const ATarget & src );
	ATarget & operator=( const ATarget & rhs );
	virtual ~ATarget();
	
	ATarget( const std::string & _type );
	const std::string & getType() const;

	virtual ATarget * clone() const = 0;

	void getHitBySpell( const ASpell & spell ) const;
};