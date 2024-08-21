/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 08:37:57 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy( void ) : ATarget("Target Practice Dummy")
{
	return ;
}

Dummy::Dummy( const Dummy & src ) : ATarget(src)
{
	*this = src; 
	return ;
}

Dummy & Dummy::operator=( const Dummy & )
{	
	return *this;
}

Dummy::~Dummy( void )
{
	return ;
}

ATarget * Dummy::clone( void ) const
{
	return new Dummy();
}