/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:07:06 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 19:15:44 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::~Fireball()
{
	
}

ASpell * Fireball::clone() const
{
	return new Fireball;
}