/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:46:51 by svidot            #+#    #+#             */
/*   Updated: 2024/08/19 14:12:53 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{
        Warlock( void );
        Warlock( const Warlock & src );
        Warlock & operator=( const Warlock & rhs );
        
        std::string name;
        std::string title;
        
    public :
        
        Warlock( std::string name, std::string title );
        const std::string & getName() const;
        const std::string & getTitle() const;
        
        void setTitle( const std::string & );
        void introduce() const;
        
        virtual ~Warlock( void );     
};