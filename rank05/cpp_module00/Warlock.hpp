/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:46:51 by svidot            #+#    #+#             */
/*   Updated: 2024/08/19 15:43:49 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>

class Warlock
{
        
        std::string name;
        std::string title;
        
        Warlock( void );
        Warlock( const Warlock & src );
        Warlock & operator=( const Warlock & rhs );
        
    public :
        
        Warlock( const std::string & name, const std::string & title );
        const std::string & getName() const;
        const std::string & getTitle() const;
        
        void setTitle( const std::string & title );
        void introduce() const;
        
        virtual ~Warlock( void );     
};

#endif