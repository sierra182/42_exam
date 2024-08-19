/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:46:49 by svidot            #+#    #+#             */
/*   Updated: 2024/08/19 15:31:53 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( void )
{   
    return ;
}

Warlock::Warlock( const Warlock & src )
{
    (void) src;
    return ;
}

Warlock::Warlock( const std::string & _name, const std::string & _title )
    :name(_name), title(_title)
{
    std::cout << this->name << ": This looks like another boring day." 
        << std::endl;
    return ;   
}
  
Warlock & Warlock::operator=( const Warlock & rhs )
{
    (void) rhs;        
    return *this;
}

Warlock::~Warlock( void )
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    return ;
}

const std::string & Warlock::getName() const
{
    return this->name;
}

const std::string & Warlock::getTitle() const
{
    return this->title;
}
        
void Warlock::setTitle( const std::string & _title )
{
    this->title = _title;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", "
        << this->title << "!" << std::endl;
}