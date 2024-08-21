/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 11:03:31 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ) : ASpell("Fwoosh", "fwooshed")
{
	return ;
}

Fwoosh::Fwoosh( const Fwoosh & src ): ASpell(src)
{
	*this = src; 
	return ;
}

Fwoosh & Fwoosh::operator=( const Fwoosh & )
{	
	return *this;
}

Fwoosh::~Fwoosh( void )
{
	return ;
}

ASpell * Fwoosh::clone( void ) const
{
	return new Fwoosh;
}