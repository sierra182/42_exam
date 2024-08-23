/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:58:28 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 19:02:18 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){}
Warlock::Warlock(const Warlock &){}
Warlock & Warlock::operator=(const Warlock &){return *this;}

Warlock::Warlock( const string  & name, const string & title)
: name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
    map<string, ASpell*>::iterator it = spl.begin();
    for (; it != spl.end(); it++)    
        delete it->second;      
    spl.clear();          
}

const string & Warlock::getName() const {return name;}
const string & Warlock::getTitle() const {return title;}
void Warlock::setTitle(const string & title) {this->title = title;}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell)
{
    map<string, ASpell*>::iterator it = spl.find(spell->getName());
    if (spell && it == spl.end())
        spl.insert(make_pair(spell->getName(), spell->clone()));               
}

void Warlock::forgetSpell(string spell)
{
    map<string, ASpell*>::iterator it = spl.find(spell);
    if (it != spl.end())
    {
        delete it->second;
        spl.erase(spell);          
    }          
}

void Warlock::launchSpell(string spell, const ATarget & target)
{
    map<string, ASpell*>::iterator it = spl.find(spell);
    if (it != spl.end())
        it->second->launch(target);
}