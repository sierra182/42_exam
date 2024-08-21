/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:46:51 by svidot            #+#    #+#             */
/*   Updated: 2024/08/20 11:42:54 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ASpell.hpp"
#define SP 100

class Warlock
{        
    std::string name;
    std::string title;
    ASpell * spells[SP];
	
    Warlock( void );
    Warlock( const Warlock & src );
    Warlock & operator=( const Warlock & rhs );
        
    public :
        
        Warlock( const std::string & name, const std::string & title );
        virtual ~Warlock( void );  
           
        const std::string & getName() const;
        const std::string & getTitle() const;
        
        void setTitle( const std::string & title );
        void introduce() const;  

		void learnSpell( ASpell * spell ); 
		void forgetSpell( std::string spell );
		void launchSpell( std::string spell, const ATarget & target );
};
