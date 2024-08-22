/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:05:19 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 11:09:31 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy()
: ATarget("Target Practice Dummy")
{}

Dummy::~Dummy(){}

ATarget * Dummy::clone() const
{
	return new Dummy;
}	