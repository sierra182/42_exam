/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh::Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:37:18 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:37:36 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"
    
Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed")
{}
Fwoosh::~Fwoosh(){}
ASpell * Fwoosh::clone() const
{
    return new Fwoosh;
}