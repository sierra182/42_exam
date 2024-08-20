/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:26 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 10:58:52 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
// #include "ASpell.hpp"
class ASpell;
class ATarget
{
	std::string type;
	
	public:

		ATarget( void );
		ATarget( const ATarget & );
		ATarget & operator=( const ATarget & );
		virtual ~ATarget( void );

		ATarget( const std::string & _type );
		virtual ATarget * clone( void ) const = 0;
		const std::string & getType( void ) const;

		void getHitBySpell(const ASpell & ) const;
};