/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                        :+:      :+:    :+:   */
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
#include "ASpell.hpp"

class SpellBook
{
    map<string, ASpell*> spl;
        
    SpellBook(const SpellBook &);
    SpellBook & operator=(const SpellBook &);
    
    public:

    SpellBook();
    ~SpellBook();
    
    void learnSpell(ASpell * spell);
    void forgetSpell(const string & spell);
    ASpell * createSpell(const string & spell); 
};