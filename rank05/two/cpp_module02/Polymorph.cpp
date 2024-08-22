/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:07:06 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 19:15:29 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::~Polymorph()
{
	
}

ASpell * Polymorph::clone() const
{
	return new Polymorph;
}