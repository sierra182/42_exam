/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:57:01 by seblin            #+#    #+#             */
/*   Updated: 2024/08/21 10:30:01 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string & _name, const std::string & _title)
: name(_name), title(_title)
{
	std::cout << name << ": This looks like another boring day." <<std::endl;	
}

Warlock::Warlock(){}
Warlock::Warlock(const Warlock &){}
Warlock & Warlock::operator=(const Warlock &){ return *this; }		
Warlock::~Warlock()
{ std::cout << name << ": My job here is done!" <<std::endl; }

const std::string & Warlock::getName() const {return this->name;}
const std::string & Warlock::getTitle() const {return this->title;}
void Warlock::setTitle(const std::string & _title) {this->title = _title;}

void Warlock::introduce() const
{ std::cout << name << ": I am " << name << ", " << title << "!" <<std::endl; }