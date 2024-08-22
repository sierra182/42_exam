/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:07:06 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 16:55:43 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{
	
}

ASpell * Fwoosh::clone() const
{
	return new Fwoosh;
}