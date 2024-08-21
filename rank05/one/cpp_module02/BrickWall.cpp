/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 08:38:04 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall( void ) : ATarget("Inconspicuous Red-brick Wall")
{
	return ;
}

BrickWall::BrickWall( const BrickWall & src ) : ATarget(src)
{
	*this = src; 
	return ;
}

BrickWall & BrickWall::operator=( const BrickWall & )
{	
	return *this;
}

BrickWall::~BrickWall( void )
{
	return ;
}

ATarget * BrickWall::clone( void ) const
{
	return new BrickWall();
}