/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:53:22 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:21:55 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
using namespace std;

class ATarget;
class ASpell
{
    string name;
    string effects;
    
    public:
    
    ASpell();
    ASpell(const ASpell &);
    ASpell & operator=(const ASpell &);
    
    ASpell( const string  & name, const string & effects);
    virtual ~ASpell();

    const string & getName() const;
    const string & getEffects() const;
    
    virtual ASpell * clone() const = 0;
    void launch(const ATarget & target) const; 
};