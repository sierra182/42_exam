/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/20 13:33:47 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball( void ) : ASpell("Fireball", "burnt to a crisp")
{
	return ;
}

Fireball::Fireball( const Fireball & src ): ASpell(src)
{
	*this = src; 
	return ;
}

Fireball & Fireball::operator=( const Fireball & )
{	
	return *this;
}

Fireball::~Fireball( void )
{
	return ;
}

ASpell * Fireball::clone( void ) const
{
	return new Fireball;
}