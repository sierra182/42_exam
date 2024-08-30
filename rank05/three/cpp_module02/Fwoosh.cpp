/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:05:19 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:08:16 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
: ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh(){}

ASpell * Fwoosh::clone() const
{
	return new Fwoosh;
}	