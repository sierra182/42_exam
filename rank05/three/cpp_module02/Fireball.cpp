/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:05:19 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:08:16 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball()
: ASpell("Fireball", "burnt to a crisp")
{}

Fireball::~Fireball(){}

ASpell * Fireball::clone() const
{
	return new Fireball;
}	