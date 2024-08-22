/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:05:19 by seblin            #+#    #+#             */
/*   Updated: 2024/08/22 12:36:21 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall()
: ATarget("Inconspicuous Red-brick Wall")
{}

BrickWall::~BrickWall(){}

ATarget * BrickWall::clone() const
{
	return new BrickWall;
}	