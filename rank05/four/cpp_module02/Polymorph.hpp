/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:35:23 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:37:03 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ASpell.hpp"
using namespace std;

class Polymorph : public ASpell 
{
    public: 
    
    Polymorph();
    ~Polymorph();
    ASpell * clone() const;
};