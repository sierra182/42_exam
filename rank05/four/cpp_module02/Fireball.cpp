/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball::Fireball.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:37:18 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:37:36 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"
    
Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp")
{}
Fireball::~Fireball(){}
ASpell * Fireball::clone() const
{
    return new Fireball;
}