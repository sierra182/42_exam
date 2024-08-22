/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:05:19 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:08:16 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph()
: ASpell("Polymorph", "turned into a critter")
{}

Polymorph::~Polymorph(){}

ASpell * Polymorph::clone() const
{
	return new Polymorph;
}	