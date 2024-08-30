/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:53:22 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 18:52:45 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
using namespace std;

#include <map>
#include <utility>
#include "ATarget.hpp"

class TargetGenerator
{
    map<string, ATarget*> spl;
        
    TargetGenerator(const TargetGenerator &);
    TargetGenerator & operator=(const TargetGenerator &);
    
    public:

    TargetGenerator();
    ~TargetGenerator();
    
    void learnTargetType(ATarget * spell);
    void forgetTargetType(const string & spell);
    ATarget * createTarget(const string & spell); 
};