/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph::Polymorph.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:37:18 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:37:36 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"
    
Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter")
{}
Polymorph::~Polymorph(){}
ASpell * Polymorph::clone() const
{
    return new Polymorph;
}