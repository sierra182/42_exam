/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:53:22 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:29:58 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
using namespace std;

class ASpell;
class ATarget
{
    string type;
        
    public:
    
    ATarget();
    ATarget(const ATarget &);
    ATarget & operator=(const ATarget &);
    
    ATarget( const string & type);
    virtual ~ATarget();

    const string & getType() const;
        
    virtual ATarget * clone() const = 0;
    void getHitBySpell(const ASpell & spell) const; 
};