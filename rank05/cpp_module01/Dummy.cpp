/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:50:47 by seblin            #+#    #+#             */
/*   Updated: 2024/08/19 17:58:28 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy( void )
{
	return ;
}

Dummy::Dummy( const Dummy & src )
{
	*this = src; 
	return ;
}

Dummy & Dummy::operator=( const Dummy & )
{
	
	return ;
}

Dummy::~Dummy( void )
{
	return ;
}