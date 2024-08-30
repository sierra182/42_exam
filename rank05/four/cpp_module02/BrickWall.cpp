/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall::BrickWall.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:37:18 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:37:36 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"
    
BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall")
{}
BrickWall::~BrickWall(){}
ATarget * BrickWall::clone() const
{
    return new BrickWall;
}