/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svidot <svidot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:53:22 by svidot            #+#    #+#             */
/*   Updated: 2024/08/23 17:58:51 by svidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
using namespace std;

class Warlock
{
    string name;
    string title;
    
    Warlock();
    Warlock(const Warlock &);
    Warlock & operator=(const Warlock &);
    
    public:
    
    Warlock( const string  & name, const string & title);
    ~Warlock();

    const string & getName() const;
    const string & getTitle() const;
    void setTitle(const string & title);
    void introduce() const; 
};