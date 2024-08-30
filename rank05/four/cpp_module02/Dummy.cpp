/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy::Dummy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:37:18 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:37:36 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"
    
Dummy::Dummy(): ATarget("Target Practice Dummy")
{}
Dummy::~Dummy(){}
ATarget * Dummy::clone() const
{
    return new Dummy;
}