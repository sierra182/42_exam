/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:09:22 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 19:15:49 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy")
{

}

Dummy::~Dummy()
{
	
}

ATarget * Dummy::clone() const
{
	return new Dummy;
}