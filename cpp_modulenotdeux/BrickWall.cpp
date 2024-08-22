/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:09:22 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 19:15:53 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::~BrickWall()
{
	
}

ATarget * BrickWall::clone() const
{
	return new BrickWall;
}